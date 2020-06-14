#include "iostream"
using namespace std;

int ruleta(int num)
{
  int numazar, contador=1; //Contador aplicando 1
  numazar = rand()%101-1;
  do 
 {
    if(num>numazar)
    {
    
    cout << "El numero es mayor al que tienes que adivinar" << endl;
    contador++; //asi ira contando el numero de veces las cualees jugo
    cout << "El numero de intento es el " << endl;
    cout << contador<< endl;
    cout << "Ingrese otro numero" << endl;
    cin >> num;

    }
      else if(num < numazar)
      {   
        
        cout << "El numero es menor al que tienes que adivinar" << endl;
        contador++;
        cout << "El numero de intento es el" << endl; 
        cout <<  contador<< endl; 
        cout << "Ingrese otro numero " << endl;
        cin >> num;
      }   
      else if (numazar=num)
      {
        cout << "Felicitaciones, adivinaste el numero" <<endl;
        
      } 
    }

  while(contador<=4 || num != 101); // 4 ya que no me da con 5
  return 0;
  
}

int main ()
{

 int numazar, num, contador = 0, salir= 101;

 cout << "Vamos a jugar, tienes que adivinar el numero magico" << endl << endl;
 cout << "Solo tienes 5 oportunidades para adivinarlo, tu numero tiene que ser entre 1 y 100" << endl;     
 cout << "si desea abandonar el juego digite: 101" << endl;
 cout << "Ingresa el numero" << endl;
 cin >> num;
 ruleta(num);
 if (num!=numazar)
 {
   cout <<"Perdiste intentalo de nuevo" ; // reiteración en el main para informar que perdio
 }
 return 0;  
}