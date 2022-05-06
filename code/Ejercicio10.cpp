#include <iostream>
#include <math.h>
#include <Windows.h>
#include <cstdio>
#include <conio.h>
#define PI 3.14159265
/*
    Problema #79 del Capitulo #3
    
    Objetivo: Encontrar todos los teoremas de pitagóras con la
    hipotenusa meno o igual que 70

    //@Author: Carlos Eduardo Ortega Frias
    //@Date: 16 de septiembre de 2021
*/
using namespace std;

void ConsoleOutput()
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1000);
} // Para mostrar caracteres especiales por consola en la codificacion UTF-8

bool CheckDecimal(double number) // Verificar si un numero tiene punto flotante
{
    if (abs(number - int(number)) > 0)
        return true;
    return false;
}

int main()
{
    ConsoleOutput();
    // Variables
    double a = 0, a2 = 0.0, b = 0, b2 = 0.0, c = 0, rango = 70;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "------------------------------------------------------------------------------" << endl;
    cout << u8" Calcular todos los teoremas de pitagóras cuya hipotenusa sea menor que 70" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    for (int i = 1; i <= rango; i++)
    {
        a = i;
        for (int j = 1; j <= rango; j++)
        {
            b = j;
            a2 = pow(a, 2); // Elevar al cuadrado A
            b2 = pow(b, 2); // Elevar al cuadrado B
            c = sqrt(a2 + b2);
            if (!CheckDecimal(c) && c <= 70)
            {
                cout << a << u8"² + ";
                cout << b << u8"² = ";
                cout << c << u8"²" << endl;
            }
        }
    }
    getch();
    return 0;
}