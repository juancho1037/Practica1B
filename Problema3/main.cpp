/*Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir posiblemente año bisiesto.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto.

*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>

using std::setprecision;
using std::setw;

using namespace std;

void Calendar(short int *month, short int *day);

short int *month = NULL, *day = NULL, m=0, d=0 ;


int main()
{
    cout <<endl;
    cout << "                ......::: HELLO SEBASTIAN :::.........."<<endl<<endl;
    cout<< "    ....::: combination of month and day are valid :::...."<<endl<<endl;

    cout << "       ....::: Input a day of the month (Number): ";
    cin >> d;cout<<endl;
    cout << "       ....::: Input a month of the year (Number): ";
    cin >> m;

    day = new short int;
    month = new short int;
    day = &d;
    month = &m;

    Calendar(month,day);
    cout<< endl;

    delete month; delete day;
    return 0;
}


void Calendar(short int *month, short int *day){

    if((*month>=1) & (*month<=12) ){
        if ((*day>=1) & (*day<=31)){
            if((*day==29) & (*month==2)){
                cout<<endl;
                cout <<setw(25)<< *day << "/" << *month << " is valid in a leap year" << endl;}
            else if((*day<=28) & (*month==2)){
                cout<<endl;
                cout <<setw(25)<< *day << "/" << *month << " is a valid date" << endl;}
            else if((*day==31) & (*month==4 || *month==6 || *month==9 || *month==11)){
                cout<<endl;
                cout <<setw(25)<< *day << "/" << *month << " is an invalid date" << endl;}
            else {
                cout<<endl;
                cout <<setw(25)<< *day << "/" << *month << " is a valid date" << endl;}
        }
        else {
            cout<<endl;
            cout <<setw(25)<< *day << " is an invalid day."<< endl;}
    }
    else {
        cout<<endl;
        cout <<setw(25)<< *month << " is an invalid month." << endl;}
}
