/*Problema 15. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
se genera una espiral de números como la siguiente:
21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13

En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
de una espiral de nxn.
Nota: la salida del programa debe ser:
En una espiral de 5x5, la suma es: 101.
Otra nota: se le dará una bonicación si imprime la espiral.
*/

#include <iostream>

using namespace std;

int main()
{
    int suma = 1,n = 0, dis = 2;

    cout <<endl;
    cout << "                  ......::: HOLA SEBASTIAN :::........."<<endl<<endl;
    cout<<"            .....:::: Suma de las diagonale de una espiral. "<<endl;
    cout <<" ...::: Ingrese el tamano de la espiral, debe ser un numero impar (ej: 5x5)): ";cin >> n;

    if(n%2==0) cout << "....::: EL numero ingresado es par, por tanto no es posible la ejecucion."<<endl;
    else{
        cout << "La suma de las diagonales de una espiral " << n <<"x"<< n;

        for(n = n/2 ; n>0 ; n--){       //Cada bucle es una capa de la espiral y cada capa corresponde a cuatro términos nuevos en la suma
            int a = dis*(dis-1) + 1;    //a es el primer termino de la suma de cada capa.
            suma = suma + 4*a + 6*dis;  //La suma de cuatro terminos corresponde a una progresión aritmetica.
            dis += 2;
        }
        cout << " es: "<<suma<<endl;
    }
    return 0;
}
