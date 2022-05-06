#include<iostream>
#include<math.h>
#include<Windows.h>
#include<cstdio>
#define PI 3.14159265
/*
    Problema #77 del Capitulo #3
    
    Objetivo: Introducir A, la altura y R, el radio de la base
    de un cono circular recto. Determinar el volumen, área lateral
    y área superficial total.

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
    double A=0.0, R=0.0;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "----------------------------------------------------------------" << endl;
    cout << u8" Calcular el volumen, área lateral y área superficial total" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Altura: "; cin >> A;
    cout << "\nRadio: "; cin >> R;
    double AreaLateral = PI * R * A; // Area del circulo
    double AreaSuperficialTotal = (PI * R * A) + (PI * pow(R, 2));
    double AreaBase = PI * pow(R, 2);
    double VolumenCono = (AreaBase * A) / 3;
    cout << u8"Volumen del cono: " << VolumenCono << u8"cm³" << endl;
    cout << u8"Área superficial total: " << AreaSuperficialTotal << u8"cm²" << endl;
    cout << u8"Área lateral: " << AreaLateral << u8"cm²" << endl;
    system("pause");
    return 0;
}