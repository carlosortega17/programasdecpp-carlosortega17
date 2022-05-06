#include<iostream>
/*
    Problema #71 del Capitulo #3
    
    Objetivo: Calcular el área de un polígono regular, dados el número
    de lados (n), las medidas del apotema (ap) y el valor de un lado (L)

    //@Author: Carlos Eduardo Ortega Frias
    //@Date: 13 de septiembre de 2021
*/
using namespace std;

int main()
{
    // Variables
    double ap = 0.0, L = 0.0, n = 0.0;
    // Borrar pantalla
    system("cls");
    // Titulo del programa
    cout << "------------------------------------------" << endl;
    cout << " Calcular el area de un poligono regular" << endl;
    cout << "------------------------------------------" << endl;
    // Lados del poligono
    cout << "Numero de lados: "; cin >> L;
    // Valor de un lado
    cout << "\nValor de un lado: "; cin >> n;
    // Valor del apotema
    cout << "\nApotema: "; cin >> ap;
    // Operacion y resultado
    cout << "\nEl area es: " << (n * L * ap) / 2 << endl;
    system("pause");
    return 0;
}