#include<iostream>
#include<math.h>
#include<Windows.h>
#include<cstdio>
#define PI 3.14159265
/*
    Problema #76 del Capitulo #3
    
    Objetivo: Calcular el volumen de un "trompo" para
    valores de entrada de r, a y b

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
    double a=0.0, b=0.0, r=0.0;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "-----------------------------------------------------------" << endl;
    cout << u8" Calcular el volumen de un \"trompo\"" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "Radio: "; cin >> r;
    cout << "\nAltura del cilindro: "; cin >> a;
    cout << "\nAltura del cono: "; cin >> r;
    double Area = PI * pow(r, 2); // Area del circulo
    double VolumenCilindro = Area * a;
    double VolumenCono = (Area * b) / 3;
    cout << u8"Volumen del \"trompo\": " << (VolumenCilindro + VolumenCono) << u8"cm³" << endl;
    system("pause");
    return 0;
}