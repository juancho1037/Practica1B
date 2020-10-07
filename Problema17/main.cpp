/*Problema 17. La secuencia de números triangulares se forma al sumar su posición en el arreglo
con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
Si listamos los números triangulares y sus divisores tenemos:
1: 1
3: 1,3
6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
Tip: el enésimo número triangular se puede representar como n*(n+1)/2.

Nota: la salida del programa debe ser:
El numero es: 28 que tiene 6 divisores.
*/

#include <iostream>

using namespace std;
int divisores(int n);


int main()
{
    int k=0, i=1;

    cout <<endl;
    cout << "                    ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<"                 ...:::Ingrese un entero positivo k: ";
    cin >> k;
    while(true){
        if(divisores((i*(i+1))/2) > k) break; //El ciclo usa fuerza bruta para verificar todos los numeros triangulares
        i++;                                  //Y para cada numero, verifica la cantidad de divisores.
    }
    cout<<endl;
    cout << "...::: El numero triangular mas chico con mas de "<<k<<" divisores es: " << (i*(i+1))/2 << " con " << divisores((i*(i+1))/2) << " divisores" <<endl;
    cout<<endl;
    return 0;
}

int divisores(int n){
    int div=0;
    for(int i=1; i<=n; i++)   //1 y n son siempre divisores de n
        if(n%i==0) div++;     //El ciclo verifica todos los números en el intervalo [1, n]
    return div;               //numero de factores encontrados
}
