/*Problema 4. Escriba un programa para leer dos números enteros con el siguiente signicado: el
valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duraci
ón de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en
inválido: 1560 es un tiempo invalido.
*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using std::setprecision;
using std::setw;

using namespace std;

void CalculateTime(short int *Time, short int *Time2);

short int *Time=NULL, *Time2=NULL, t=0, t2=0;


int main()
{
    cout <<endl;
    cout << "                ......::: HELLO SEBASTIAN :::.........."<<endl<<endl;
    cout<< "        ....::: combination of numbers for a valid time :::...."<<endl<<endl;

    cout << "             ....::: Input a time of day (Number): "; cin>>t;cout<<endl;

    Time = new short int;
    Time2 = new short int;
    Time = &t;
    Time2 = &t2;

    if (*Time%100>=60)cout<<"      .......:::: "<<*Time<<" is an invalid time. "<<endl;
    else
    {
        cout << "         ....::: Input a new time of day (Number): "; cin>>t2;cout<<endl;
        if(*Time2%100>=60)cout<<"      .......:::: "<<*Time2<<" is an invalid time. "<<endl;
        else
        {
            CalculateTime(Time, Time2);
            cout<<endl;
        }
    }
    delete Time; delete Time2;
    return 0;
}

void CalculateTime(short int *Time, short int *Time2){

    int hour1=0,hour2=0,minute1=0,minute2=0,minutes=0,hours=0;

    hour1=*Time/100;
    hour2=*Time2/100;

    minute1=*Time%100;
    minute2=*Time2%100;

    minutes+=minute1+minute2;
    if(minutes>59)
        minutes=minutes-60;

    hours+=1;
    hours+=hour1+hour2;

    if (hours>=24)
        hours=hours-24;
    int finalhour=(hours*100)+minutes;
    cout<<"                           ......:::: The time is: "<<finalhour<<endl;
}
