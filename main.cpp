/*
Programa_51

funciones con parametros con paso de valor.
Variables globales, prototipos, llamado de funciones automatico.
Suma y resta de dos números enteros.

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 28 de abril de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void multiplicacion (int x, int y);//prototipo
void division (int x, int y);//prototipo
int n1, n2, resp;//variables globales

int main()
{

    int opc;
    do
    {
    cout<<"\n\tPrograma multiplicacion y division \n";
    cout<<"\n\n\t----------------------";
    cout<<"\n\n\t 1.- Multiplicacion";
    cout<<"\n\n\t 1.- Division";
    cout<<"\n\n\t 3.- Salir";
    cout<<"\n\n\t Elige una opcion: ";
    cin>>opc;

    switch (opc)
{
case 1:

    cout<<"\n\n\tDame un numero entero:   "; cin>> n1;
    cout<<"\n\n\tDame otro numero entero: "; cin>> n2;
    multiplicacion(n1,n2);
    break;

case 2:

    cout<<"\n\n\tDame un numero entero:   "; cin>> n1;
    cout<<"\n\n\tDame otro numero entero: "; cin>> n2;
    division(n1,n2);
    break;

case 3:
    cout<<"\n\n\tHa elegido salir...\n\n\t";
    system("pause");
    break;

default:
    cout<<"\n\n\tHa elegido una opcion incorrecta...\n\n\t";
    system("pause");
}
    system ("cls");
    }while (opc!=3);
    return 0;
}

void multiplicacion (int x, int y)
{
    cout<<"\n\tPrograma: La multiplicacion";
    resp=x*y;
    cout<<"\n\n\tEl resultado es: "<<resp<<"\n\n\t\t";
    system("pause");
}

void division (int x, int y)
{
    cout<<"\n\tPrograma: La division";
    resp=x/y;
    cout<<"\n\n\tEl resultado es: "<<resp<<"\n\n\t\t";
    system("pause");
}
