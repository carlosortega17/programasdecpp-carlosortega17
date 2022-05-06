#include <iostream>
#include <math.h>
#include <Windows.h>
#include <cstdio>
#include <conio.h>
#define PI 3.14159265
/*
    Problema #79 del Capitulo #3
    
    Objetivo: El teorema de pitagóras es un conjunto de números que 
    satisface la relación A² + B² = C².
    Los números (3, 4, 5) y (5, 12, 13) son ejemplos de teorema de pitagóras,
    pues 3² + 4² = 5² y 5² + 12² = 13². Encontrar 15 teoremas de pitagóras de este tipo.

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
    double a=0, a2 = 0.0, b=0, b2=0.0, c=0, i=1;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "----------------------------------------------------------------" << endl;
    cout << u8" Calcular 15 teoremas de pitagoras" << endl;
    cout << "----------------------------------------------------------------" << endl;
    do
    {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
        a2 = pow(a, 2); // Elevar al cuadrado A
        b2 = pow(b, 2); // Elevar al cuadrado B
        c = sqrt(a2 + b2);
        if (!CheckDecimal(c))
        {
            cout << i << ".- ";
            cout << a << u8"² + ";
            cout << b << u8"² = ";
            cout << c << u8"²" << endl;
            i+=1;
        }
    }while(i <=15);
    getch();
    return 0;
}