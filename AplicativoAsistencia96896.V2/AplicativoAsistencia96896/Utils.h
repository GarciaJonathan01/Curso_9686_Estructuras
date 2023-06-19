#ifndef UTILS_H
#define UTILS_H
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>
#include "ListaDobleCircular.h"
using namespace std;

class Utils
{
    public:
    
    
    // validar que el usuario exista mediante cedula
     bool verificarUsuario(string cedula)
    {

        listaDobleCircular<string> results;
        Nodo<string> *aux3;

        string line;
        string lectura;
        lectura = leerArchivoTxt();
        char delimitador = '\n';
        stringstream input_stringstream(lectura);

        while (getline(input_stringstream, line, delimitador))
        {

            results = split(line, ' ');
            aux3 = results.getCabeza();
            while (aux3 != nullptr)
            {
                if (aux3->getDato() == cedula)
                {
                    return true;
                }
                aux3 = aux3->getSiguiente();
            }

        }
        return false;
    }
    // metodo toma una cade de texto  y un caracter de entrada lo divide y devuekve la lista doblemente enlazada circular
    listaDobleCircular<string> split(string str, char pattern)
    {

        int posInit = 0;
        int posFound = 0;
        string splitted;
        listaDobleCircular<string> results;
        // vector<string> results;

        while (posFound >= 0)
        {
            posFound = str.find(pattern, posInit);
            splitted = str.substr(posInit, posFound - posInit); // separa informacion en posiciones enteras
            posInit = posFound + 1;
            results.insertar(splitted);
        }

        return results;
    }
    // toma el nombre de un archivo y lee el contenido
    std::string leerArchivoTxtEspecifico(std::string archivoTxt)
    {
       std:: string texto;
        std::string lectura;
        std::ifstream archivo;
        archivo.open(archivoTxt, ios::in);
        if (archivo.fail())
        {
            std::cout << "No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof())
        {
            getline(archivo, texto, ' ');
            lectura += texto + " ";
        }
        archivo.close();
        return lectura;
    }
    // toma una fecha y un archivo y verifica si la fecha existe en el archivo
     bool isDateValid(const std::string &inputDate, const std::string archivo)
    {
        listaDobleCircular<std::string> results;
        Nodo<string> *aux2;
        std::string line;
        std::string lectura;
        lectura = leerArchivoTxtEspecifico(archivo);
        char delimitador = '\n';
        std::stringstream input_stringstream(lectura);

        while (getline(input_stringstream, line, delimitador))
        {
            results = split(line, ' ');
            aux2 = results.getCabeza();
            while (aux2 != nullptr)
            {
                if (aux2->getDato() == inputDate)
                {
                    return true;
                }
                aux2 = aux2->getSiguiente();
            }
        }

        return false;
    }
    string leerArchivoTxt()
    {
        string texto;
        string lectura;
        ifstream archivo;
        archivo.open("personasRegistradas.txt", ios::in);
        if (archivo.fail())
        {
            cout << "No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof())
        {
            getline(archivo, texto, ' ');
            lectura += texto + " ";
        }
        archivo.close();
        return lectura;
    }

};
#endif // UTILS_H