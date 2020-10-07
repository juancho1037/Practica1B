/*Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:
 * El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
ejemplo mostrado, el tamaño de la gura es 7.
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <iostream>
#include <iomanip>
using std::setprecision;
using std::setw;

using namespace std;

void printFigure(int *n);
int abs(int n);

int *n=NULL, N=0;

int main()
{ 

    cout <<endl;
    cout << "                     ......::: HELLO SEBASTIAN :::.........."<<endl<<endl;
    cout<< "       ....::: output the shape of a rhombus of the given size :::...."<<endl<<endl;

    cout << "           ....:::: Input an odd number bigger than 0: ";
    cin >>N;

    n=new int;
    n=&N;

    if (N%2 == 0) {
        cout <<endl;
        cout<<"             ....:::: The number entered is not odd."<<endl;
        cout <<endl;
    }
    else {
        cout <<endl;
        printFigure(n);
        cout <<endl;
    }

    delete n;
    return 0;
}

void printFigure(int *n){
    int i=0, j=0;
    *n /= 2;  // La mitad del tamaño, porque la figura es siméntrica.

    cout<<endl;

    for(i =- *n; i<= *n ; i++){
        cout<<setw(35);
        for(j =- *n; j<= *n ; j++){ //Estos dos bucles generan una matriz del tamaño del gráfico.
            if(abs(i)+abs(j) <= *n)
                cout << "*";  // Solo imprime un "*" si la suma de las coordenadas (i, j) es mayor que n
            else cout << " ";
        }
        cout << endl;
    }
    cout<<endl;
    cout <<setw(20);
}

int abs(int n){
    if(n>=0)
        return n;
    else return -n;  //Mathematical definition of absolute value
}
