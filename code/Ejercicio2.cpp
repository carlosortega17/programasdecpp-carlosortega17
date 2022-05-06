#include<iostream>
#include<math.h>
#define PI 3.14159265
/*
    Problema #72 del Capitulo #3
    
    Objetivo: Calcular e imprimir el área A y longitud del perímetro
    P de un polígono con n lado circunscrito en una circunferencia
    de radio r. Introducir valores para r y n y sacar los valores A y P.

    //@Author: Carlos Eduardo Ortega Frias
    //@Date: 13 de septiembre de 2021
*/
using namespace std;

int main()
{
    // Variables
    double N=0.0, r=0.0;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "-----------------------------------------------------------" << endl;
    cout << " Calcular el area y perimetro de un poligono circunscrito" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "Numero de lados: "; cin >> N;
    cout << "\nRadio: "; cin >> r;
    double angulo = ((360 / (N * 2)) * 2); // Obtenemos el algulo
    double anguloRad = (angulo * PI) / 180; // Obtenemos el angulo en radianes
    double perimetro = 2*r*N*sin(anguloRad / 2);  perimetro = round(perimetro);// Obtenemos el perimetro
    double lado = perimetro / N; // Obtenemos el valor de 1 de los lados
    double area = (N * lado * r); area = round(area);
    cout << "\nPerimetro: " << perimetro << "\nArea: " << area << endl;
    system("pause");
    return 0;
}