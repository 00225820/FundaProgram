#include <iostream>
using namespace std;
int main()
{
    string Nombre; 
    int Cantidad;
    float Total;
    float precio;

    cout <<"El producto es:"<< endl;
    cin >> Nombre;

    cout << "El producto cuesta:" << endl;
    cin >>precio;

    cout << "La cantidad de productos que usted lleva es:"<< endl;
    cin >>Cantidad;

    Total = (Cantidad*precio);


    cout << "El total a pagar es:"<<Total <<endl;

    return 0;
}