#include "iostream"
#include "string"
#include "conio.h"

using namespace std;

int main(void)
{
    string caracteres;
    int par;

    cout << "Programa para verificar si la palabra ingresada es mayor a 10 caracteres y analizar si la cantidad de los mismos es par o impar" << endl;
    cout << "Ingrese una palabra" << endl;
    cin >> caracteres;
    par = caracteres.length();
    

    if(par >10 ) 
    {
        cout << "La palabra ingresada tiene un numero de caracteres mayor a 10" << endl;

    }
    else 
    {
        cout << "La palabra ingresada tiene un numero de caracteres menor a 10" << endl;
    }

    if ((par %2) == 0)
    {
        cout << "el numero de caracteres es par" << endl;
    }
    else 
    {
        cout << "El numero de caracteres es impar" << endl;
    }

    return 0;


}