/*Problema 7. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10
*/

#include <iostream>
#include <iomanip>
using std::setprecision;
using std::setw;

using namespace std;


void Sum(int number);

int main()
{
    cout <<endl;
    cout << "                     ......::: HELLO SEBASTIAN :::.........."<<endl<<endl;
    cout <<"::: PROGRAM THAT ADDS THE EVEN NUMBERS IN THE FIBONACCI SERIES LESS THAN A VALUE :::"<<endl;
    cout <<":::                         ENTERED BY THE USER                                 :::"<<endl;

    int number;
    cout <<endl<<endl<<endl;
    cout <<"                    .......:::::: Input a number: ";
    cin >> number;

    Sum(number);

    return 0;
}

void Sum(int number){
    int suma=0,x=1, y=1, contador=0;
    while(suma<=number){
        x=y;
        y=suma;
        suma=x+y;
        if(suma<=number && suma%2==0){
            contador+=suma;
        }
    }
    cout << endl<<endl;
    cout <<"            .......:::: The Result of the Sum is: "<<contador<< endl<<endl;
}
