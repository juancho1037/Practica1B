/*Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 11 + 22 + 22 + 33 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout <<endl;
    cout << "                             ......::: HELLO SEBASTIAN :::.........."<<endl<<endl;
    cout << ":::    PROGRAMA QUE CALCULA LA SUMA DE TODOS LOS DIGITOS DE UN NUMERO ELEVADOS A SI MISMOS     :::" << endl<<endl<<endl;

    int numero,cantidad=1, aux=10,i=10,contador=0,resultado=0,divisor;
    cout <<endl;
    cout << "                       .....::::: Ingrese un numero: "; cin>>numero;
    cout <<endl;
    while(aux>9)
    {
        aux=numero/i;
        cantidad+=1;
        i*=10;
    }
    cantidad-=1;
    aux=numero;
    while(cantidad>=0)
    {
        divisor=pow(10,cantidad);
        contador=aux/divisor;
        if (contador!=0)
        {
            resultado+=pow(contador,contador);
            aux=aux%divisor;
            cantidad-=1;
        }
        else
        {
            aux=aux%divisor;
            cantidad-=1;
        }

    }
    cout<<"                     .....::::: El resultado de la suma es: "<<resultado<<endl;
    cout <<endl;
    return 0;
}
