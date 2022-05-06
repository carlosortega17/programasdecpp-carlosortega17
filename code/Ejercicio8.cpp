#include<iostream>
#include<math.h>
#include<Windows.h>
#include<cstdio>
#define PI 3.14159265
/*
    Problema #78 del Capitulo #3
    
    Objetivo: Un ingeniero que construye presas de tierra necesita un programa
    para calcular el volumen de tierra requerido para una cierta presa.
    Todas las presas tienen una forma y sólo varían en dimensiones. Calcular
    el volumen en yardas cúbicas.

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
    double h=0.0, w=0.0, a=0.0, i=0.0;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "----------------------------------------------------------------" << endl;
    cout << u8" Calcular el volumen de tierra en yardas cúbicas" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Altura: "; cin >> h;
    cout << "\nBase: "; cin >> w;
    cout << "\nBase superior: "; cin >> a;
    cout << "\nAltura del prisma: "; cin >> i;
    double AreaTrapecioEscaleno = h * ((w + a) / 2);
    double VolumenDelPrisma = AreaTrapecioEscaleno * i;
    cout << u8"Volumen del prisma: " << VolumenDelPrisma << u8"y³" << endl;
    cout << u8"Área de la base: " << AreaTrapecioEscaleno << u8"cm²" << endl;
    system("pause");
    return 0;
}