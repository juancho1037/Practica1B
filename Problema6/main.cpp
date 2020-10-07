/*Problema 6. Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma innita:
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 el formato de salida debe ser: El resultado de la suma es: 10
*/

#include <iostream>

using namespace std;

float factorial(float n);

int main()
{
    short int n=0;
    float e=0, i=0;

    cout <<endl;
    cout << "                     ......::: HELLO SEBASTIAN :::.........."<<endl<<endl;
    cout<< "  ....::: approximate value of euler number based on to the infinite sum :::...."<<endl<<endl;

    cout << "   ...::: Input the number of terms to use in the approximation of e: "; cin >> n;

    while(i<n){
        e += (1/(factorial(i))); //Each iteration of the loop is a new term in the aproximation
        i++;
    }
    cout << endl;
    cout << "                                             ...:::e es aproximately: " <<e<<endl;

    return 0;
}

float factorial(float n){

    int p=1;
    if(n==0)        //Exception 0!
        return 1;
    for(int i=1 ; i<=n ; i++)
        p*=i;       //n! = 1*2*3*4*5...*n. The loop iterates n times
    return p;
}
