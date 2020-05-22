#include "iostream"
#include "string"

using namespace std;
int main()

{
    string palabra;
    char caracter1; 
    char caracter2;

    cout << "Programa para verificar si la palabra ingresada inicia y finaliza con la misma letra"<< endl;
    cout << "Ingrese una palabra" << endl;
    cin >> palabra;

    caracter1 = palabra.front();
    caracter2 = palabra.back();

    if (caracter1 = caracter2)
    {
        cout << "Su palabra da inicio y finaliza con la misma letra" << endl;
    }
    else
    {
        cout << "Su palabra no inicia, ni finaliza con la misma letra" << endl;
    
    }

    return 0;

}