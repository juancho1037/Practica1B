/*Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar
la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Ej: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10
*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using std::setprecision;
using std::setw;

using namespace std;

int *amount=NULL, am=0;
const int *bills;
const int Bills[10] = {50000,20000,10000,5000,2000,1000,500,200,100,50};

void calChange(const int *bills, int *amount);

int main()
{
    bills = new int[10];
    bills = Bills;
    amount =&am;

    cout <<endl;
    cout << "                ......::: HELLO SEBASTIAN :::.........."<<endl<<endl;
    cout<< "    ....::: Combination of banknotes for a certain amount :::...."<<endl<<endl;
    cout << "    ........:::: Input the amount of money you need: ";cin>>am;cout<<endl<<endl;

    calChange(bills,amount);
    cout<<endl;

    return 0;
}


void calChange(const int *bills, int *amount){
    for (unsigned short int i=0;i<=9;i++) {
        cout<<setw(30)<<*(bills+i)<<": "<< *amount / (*(bills+i))<<endl; //Number of banknotes you need (Numero de billetes que necesitas)
        *amount %= *(bills+i); //Money leftover (Dinero sobrante)
    }
    cout<<endl;
    cout<<setw(32)<<"Leftover: "<<*amount<<endl;
}

