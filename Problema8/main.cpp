/*Problema 8. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.
*/

#include <iostream>
#include <iomanip>
using std::setprecision;
using std::setw;

using namespace std;

void PrintR(int a, int b, int c);

int a=0, b=0, c=0, p=1, suma = 0, i=1;
bool verificador = false;

int main()
{
    cout <<endl;
    cout << "                     ......::: HELLO SEBASTIAN :::.........."<<endl<<endl;

    cout << "::: PROGRAM THAT PRINTS THE SUM OF COMMON MULTIPLES BETWEEN TWO NUMBERS :::" << endl<<endl;
    cout << ":::             INSTRUCCIONES:                                          :::" << endl<<endl;
    cout << ":::             El programa te va a pedir 3 numeros, el primero y el    :::" << endl;
    cout << ":::             segundo son para encontrar la suma de sus multiplos     :::" << endl;
    cout << ":::             comunes y el tercer numero es para definir el rango     :::" << endl;
    cout << ":::             de dichos multiplos, menores el tercer numero ingresado :::" << endl;
    cout << endl<<endl<<endl;


    cout << ":::            Input the first number: "; cin >> a; cout<< endl;

    cout << ":::            Input the second number: ";cin >> b; cout << endl;

    cout << ":::            Input the third number: "; cin >> c; cout << endl;

    PrintR(a,b,c);
    cout<<endl;

    return 0;
}

void PrintR(int a, int b, int c){

    //Ciclo de control de impresiones de los multiplos del numero a menores que el numero C.
    cout <<setw(16);
    while(a*i<c)
    {
        cout << a*i << " + ";
        suma=suma+a*i;
        i++;
    }
    i=1;

    //Ciclo para imprimir y verificar los multiplos del numero b menores que c y comunes y no comunes del numero a

    while(b*i<c)
    {
        verificador=true;
        p=1;
        while(a*p<c){
            if(a*p==b*i){
                verificador=false;
                break;
            }
            p++;
        }
        if(verificador==true){
            cout << b*i;
            if (b*(i+2) < c )
                cout <<" + ";
            suma += b*i;
        }
        i++;
    }
    cout<<" = "<<suma<<endl;
    cout<<endl;
}
