#include "iostream"
#include "stdlib.h"
#include "cmath"

using namespace std;

int main(void)
{
    int numero1;
    int numero2;
    int resultado;

    cout << "Programa para verificar si un numero es par o impar" << endl;
    cout << "Instrucciones: El usuario debera colocar un numero cualquiera para saber si este es par o impar" << endl;
    cout << "Coloque su numero" << endl;
    cin >> numero1;

    numero2 = numero1%2;

    if (numero2 == 0)
    {
        cout << "Su numero es par" << endl;

    }
    else 
    {
        cout << "Su numero es impar" << endl;
    }

    return 0;

}