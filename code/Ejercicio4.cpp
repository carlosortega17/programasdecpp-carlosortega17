#include<iostream>
#include<math.h>
#include<Windows.h>
#include<cstdio>
#define PI 3.14159265
/*
    Problema #74 del Capitulo #3
    
    Objetivo: Introducir la longitud L, la anchura
    W y la altura H de un prisma rectangular. Calcular
    el volumen y el área superficial total del prisma.

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
    double L=0.0, W=0.0, H=0.0;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "-----------------------------------------------------------" << endl;
    cout << u8" Calcular el volumen y área superficial de un prisma" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "Longitud: "; cin >> L;
    cout << "\nAnchura: "; cin >> W;
    cout << "\nAltura: "; cin >> H;
    double Volumen = L * H * W;
    double Area = L * W;
    cout << "Volumen del prisma: " << Volumen << u8"cm³" << endl;
    cout << u8"Área del prisma: " << Area << u8"cm²" << endl;
    system("pause");
    return 0;
}