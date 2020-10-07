/*Problema 10. Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.
*/

#include <iostream>

using namespace std;

bool primo(int n);

int main()
{
    cout <<endl;
    cout << "                     ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;

    int n=0, out=0, i=0;
    cout << "           ......::::: Ingrese un numero entero positivo mayor que 0: "; cin >> n; cout<<endl<<endl;
    cout << "                   ......:::: El "<<n<<" th numero primo es: ";

    while(n > 0){
        if(primo(i)==true){
            n--;
            out = i;
        }
        i++;
    }
    cout<< out<<endl;
    cout<<endl;
    return 0;
}

bool primo(int n){
    if(n<=1) return false;
    for(int i = 2; i<n ; i++){
        if(n%i == 0) return false;
    }
    return true;
}
