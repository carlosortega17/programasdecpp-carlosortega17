#include<iostream>
#include<math.h>
#include<Windows.h>
#include<cstdio>
#define PI 3.14159265
/*
    Problema #73 del Capitulo #3
    
    Objetivo: Calcular el volumen y área de una esfera con
    las fórmulas V = 4 * 𝜋 * r^3 / 3 y A = 𝜋 * r^2, donde r
    es el radio de la esfera. En este problema, r = 10cm.

    //@Author: Carlos Eduardo Ortega Frias
    //@Date: 13 de septiembre de 2021
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
    double r=10.0; // Valor inicial para el radio
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "-----------------------------------------------------------" << endl;
    cout << u8" Calcular el volumen y área de una esfera con radio 10cm" << endl;
    cout << "-----------------------------------------------------------" << endl;
    double Volumen = (4/3) * PI * pow(r, 3);
    double Area = PI * pow(r, 2);
    cout << "Volumen de la esfera: " << Volumen << u8"cm³" << endl;
    cout << u8"Área de la esfera: " << Area << u8"cm²" << endl;
    system("pause");
    return 0;
}