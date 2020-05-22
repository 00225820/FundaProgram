#include "iostream"
#include "stdlib.h"
#include "cmath"

using namespace std;
int main()
{
    int dividendo;
    int divisor;
    int division;
    int residuo;

    cout << "Programa para verificar si un numero es divisible entre otro" << endl;
    cout << "Por favor, procurar que el dividendo sea mayor que el divisor" << endl;
    cout << "Ingrese su dividendo" << endl;
    cin >> dividendo;
    cout << "Ingrese su divisor" << endl;
    cin >> divisor;

    division = dividendo/divisor;
    residuo = dividendo%divisor;

    cout << "El resultado de tu division es: " << division << endl;
    cout << "El resultado de tu residuo es: " << residuo << endl;

    if(residuo == 0)
    {
        cout << "Sus numeros si son divisibles entre si, ya que su residuo es 0 " << endl;
    }
    else
    {
        cout << "Sus numeros no son divisibles entre si, ya que su residuo no es 0" << endl;
    }
    


    return 0;

}