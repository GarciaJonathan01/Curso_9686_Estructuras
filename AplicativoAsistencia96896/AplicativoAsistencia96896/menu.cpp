/***********************************************************************
 *				UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                *
 * Materia: Estructura de datos.									   *
 * Integrantes: Cachiguango, Guerra, Garcia.						   *
 * Fecha de creacion: 19 de mayo del 2023. 							   *
 * Fecha de modificacion: 10 de Junio del 2023.						   *
 * Enunciado: Utilizando listas doblemente enlazadas controlar el	   *
 * registro de matriculas vehiculares.								   *
 ************************************************************************/

#include "menu.h"
#include <windows.h>
#include "rang.hpp"
#include "definiciones.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>

MenuItem::MenuItem(
	std::string label, std::function<void()> callable, bool must_wait, bool is_enabled) {
	label_ = [label] { return label; };
	action(callable);
	wait(must_wait);
	enabled(is_enabled);
}

MenuItem::MenuItem(
	std::function<std::string()> label, std::function<void()> callable, bool must_wait, bool is_enabled) {
	label_ = label;
	action(callable);
	wait(must_wait);
	enabled(is_enabled);
}

MenuItem& MenuItem::enabled(bool value) {
	is_enabled_ = [value] { return value; };
	return *this;
}

MenuItem& MenuItem::enabled(std::function<bool()> callable) {
	is_enabled_ = callable;
	return *this;
}

MenuItem& MenuItem::action(std::function<void()> callback) {
	action_ = callback;
	return *this;
}

MenuItem& MenuItem::wait(bool value) {
	must_wait_ = [value] { return value; };
	return *this;
}

MenuItem& MenuItem::wait(std::function<bool()> callable) {
	action_ = callable;
	return *this;
}

void MenuItem::label(std::string label) {
	label_ = [label] { return label; };
}

std::string MenuItem::label() {
	return label_();
}

bool MenuItem::is_enabled() {
	return is_enabled_();
}

bool MenuItem::must_wait() {
	return must_wait_();
}

void MenuItem::exec() {
	if (action_ != nullptr) {
		action_();
	}
}

//////////////////////////////////////////////////////////////////

Menu::Menu(std::string title) {
	title_ = title;
}

void Menu::add(MenuItem option) {
	items_.push_back(option);
}

void Menu::run() {
	int selected = 0;

	if (items_.empty()) {
		return;
	}

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);

	running_ = true;
	int margen_izq = 50;

	while (running_) {
		system("cls");

		std::cout << title_ << std::endl;

		for (int i = 0; i < title_.length(); i++) {
			std::cout << "-";
		}

		std::cout << std::endl
			<< std::endl;

		for_indexed(MenuItem item : items_) {
			if (selected == i) {
				std::cout << " > ";
				std::cout
					<< rang::style::bold
					<< rang::bg::red
					<< rang::fg::gray;
			}
			else {
				std::cout << "  ";
			}

			std::cout << /* (i + 1) << ": " <<*/ item.label()
				<< " " << rang::style::reset << std::endl;
		}

		int key;

		do {
			key = _getch();

			if (key == 0) {
				key = _getch();
			}
		} while (key != +Tecla::Abajo
			&& key != +Tecla::Arriba
			&& key != +Tecla::Enter);

		if (key == +Tecla::Arriba) {
			selected--;
		}
		else if (key == +Tecla::Abajo) {
			selected++;
		}

		selected = (selected < 0 ? (items_.size() - 1) : (int)(selected >= items_.size() ? 0 : selected));

		if (key == +Tecla::Enter) {
			std::cout << std::endl
				<< std::endl;

			MenuItem item = items_.at(selected);
			item.exec();

			if (item.must_wait()) {
				std::cout
					<< std::endl << std::endl
					<< rang::style::bold
					<< rang::fg::cyan
					<< "\n\n[presione cualquier tecla]"
					<< rang::style::reset;
				_getch();
			}
		}
	}
}

MenuItem Menu::exit_item(std::string label) {
	return MenuItem(label)
		.action(std::bind(&Menu::stop, this))
		.wait(false);
}

void Menu::stop() {
	running_ = false;
}

