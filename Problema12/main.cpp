/*
 * Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.
*/
#include <iostream>

using namespace std;
bool primo(int n);

int main()
{
    int n=0, max=1;

    cout <<endl;
    cout << "                ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<< "          .....:::: Maximo factor primo de un numero"<<endl;
    cout << "           ......::: Ingrese un numero entero: "; cin >> n;

    cout <<endl;
    for(int i=1; i<=abs(n) ; i++){
        if( abs(n)%i==0 & primo(i)==true) // El bucle pasa por todos los numeros
            max = i;                      // Si el numero actual es primo y un factor de n, max se actualiza
    }
    cout << "             ....:::: El mayor factor primo de "<< n << " es " << max << endl;
    cout <<endl;
}

bool primo(int n){
    if(n<=1) return false;
    for(int i = 2; i<n ; i++){      //El ciclo comprueba todos los numeros en el intervalo [2, n).
        if(n%i == 0) return false;  //Si i es un factor de n, entonces n no es un numero primo
    }
    return true;                    //de lo contrario, el numero debe ser primo
}
