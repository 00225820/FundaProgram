#include <iostream>
#include <iomanip>
using namespace std;

int salarior() //Funcion
{
    float ss, AFP, renta, salarioT, salario_neto;
    int hora1, hora2, n, i;
    cout << endl << "Digite la cantidad de empleados:" << endl; 
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << endl << "Digite las horas trabajadas en el mes:" << endl;
        cin >>hora1;
        cout << endl <<"Digite las horas extras trabajadas en el mes:" << endl;
        cin >>hora2;

        salarioT = (hora1*1.75) + (hora2*2.50);
        ss = salarioT*0.04;
        AFP = salarioT*0.0625;
        renta = salarioT*0.1;
        salario_neto = salarioT - (ss+AFP);
        if (salarioT>500)
        {
        salario_neto = (salario_neto) - (renta);
        }
        cout << fixed << setprecision(2) << endl <<"Su salario total es:"<<salarioT; //Para colocar numero limite de decimales
        cout << fixed << setprecision(2) << endl <<"Su salario neto es:"<<salario_neto;
    }
 return 0;
} 

int main()
{ 
    salarior();
}