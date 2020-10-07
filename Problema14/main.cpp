/*Problema 14. Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
como una multiplicación de números de 3 dígitos.
Ej: una de las posibles respuestas es: 143*777=111111.
Nota: la salida del programa debe ser: 143*777=111111
*/

#include <iostream>

using namespace std;

bool palindromo(int n);

int main()
{
    cout <<endl;
    cout << "                                        ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<"     .....:::: numero palindromo mas grande que se puede obtener como una multiplicacion de numeros de 3 digitos."<<endl;

    int max = 0, a=1 ,b=0;
    for(short int i = 0; i < 1000; i++){                //i y j son las coordenadas de una cuadricula de 1000x1000
        for(short int j = i; j < 1000; j++){            //El ciclo multiplica todas las combinaciones posibles de i y j y guarda el mayor numero palindromo obtenido
            if((palindromo(i*j)==true) & (i*j >= max)){ //cada producto se calcula una sola vez
                max = i*j;
                a=i;
                b=j;
            }
        }
    }
    cout<<endl;
    cout << "           ...:::: Numero palindromo mas grande, que es el producto de dos numeros de tres digitos: ";
    cout << a <<"*"<<b<<" = "<< max <<endl;
    cout<<endl;
    return 0;
}

bool palindromo(int n){
    int pal = 0;                  //pal contiene una copia invertida de n
    for(int i = n; i !=0; i/=10){ //i se le asigna el valor n
        pal = pal*10 + i%10;      //Cada iteracion saca el ultimo digito de i y lo adjunta como una unidad de pal
    }
    if(pal==n)              //si n es igual que la version invertida, entonces n es un palindromo
        return true;
    else return false;
}
