/*Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.
*/
#include <iostream>

using namespace std;
bool primo(int n);

int main()
{
    int n=0, suma=0;

    cout <<endl;
    cout << "                ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<"     .....:::: Suma de todos los primos menores que el numero ingresado."<<endl;
    cout << "           ....:::: Ingrese un numero entero positivo: "; cin >> n;
    cout <<endl;

    for(int i=2; i<n; i++)
        if(primo(i)==true) suma += i;  //El ciclo pasa por todos los números menores que n, y suma los primos.
    cout<<endl;
    cout << "    ....:::: La suma de todos los numeros primos menores que "<<n<<" es: "<< suma <<endl;
    cout <<endl;
    return 0;
}

bool primo(int n){
    if(n<=1) return false;
    for(int i = 2; i<n ; i++){      //El ciclo comprueba todos los números en el intervalo [2, n).
        if(n%i == 0) return false;  //Si i es un factor de n, entonces n no es un numero primo
    }
    return true;                    //de lo contrario, el numero debe ser primo
}
