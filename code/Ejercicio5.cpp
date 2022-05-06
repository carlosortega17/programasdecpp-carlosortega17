#include<iostream>
#include<math.h>
#include<Windows.h>
#include<cstdio>
#define PI 3.14159265
/*
    Problema #75 del Capitulo #3
    
    Objetivo: Introducir las longitudes de las diagonales
    y determinar el área de un rombo.

    //@Author: Carlos Eduardo Ortega Frias
    //@Date: 16 de septiembre de 2021
*/
using namespace std;

void ConsoleOutput()
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1000);
} // Para mostrar caracteres especiales por consola en la codificacion UTF-8

int main()
{
    ConsoleOutput();
    // Variables
    double D=0.0, d=0.0;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "-----------------------------------------------------------" << endl;
    cout << u8" Calcular el área de un rombo" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "Diagonal mayor: "; cin >> D;
    cout << "\nDiagonal menor: "; cin >> d;
    double Area = (D * d) / 2;
    cout << u8"Área del rombo: " << Area << u8"cm²" << endl;
    system("pause");
    return 0;
}