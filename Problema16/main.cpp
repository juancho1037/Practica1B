/*Problema 16. La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonicación si imprime la serie.
*/

#include <iostream>

using namespace std;
int Serie(int j,bool c);


int main()
{
    int k=0, m=1;

    cout <<endl;
    cout << "                    ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<"             ...::: Ingrese un entero positivo k, mayor que cero: ";
    cin >> k;
    for(int j=1; j<k; j++){   // j recorre todos los numeros menores que k
        if(Serie(j,false) > Serie(m,false)) m=j;   // El algoritmo utiliza la fuerza bruta para encontrar la mayor serie y su semilla
    }
    cout<<endl;
    cout << "La serie mas grande se consigue con la semilla: "<<m<<" teniendo "<<Serie(m,false)<<" terminos. " <<endl<<endl<<"La Serie es: ";
    Serie(m,true);
    cout<<endl;
    return 0;
}

int Serie(int j, bool c){     //esta funcion devuelve la longitud de la serie generada por la semilla j
    int len = 0;
    while(j > 1){               //El ultimo termino de una serie de collatz es siempre 1.
        len++;
        if(c==true) cout << j<<", "; //si c es verdadero, se imprime la serie collatz.
        if(j%2 == 0) j /= 2;    //n es par
        else j = 3*j +1;        //n es impar
    }
    if(c==true) cout <<j<<endl;
    return len +1;
}
