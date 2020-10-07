/*Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una consonante
o ninguna de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

bool CheckLetter(char *letter);
bool TypeOfLetter(char *letter);

char *letter=NULL, L='0';
bool *result=NULL, R=false, S=false;

int main()
{
    letter = new char;
    result = new bool;
    letter = &L;
    result = &R;

    cout <<endl;
    cout << "                                      ......::: HELLO SEBASTIAN :::.........."<<endl<<endl<<endl;
    cout << "                ......::: We are going to identify Types of letters (Vowels) (Consonants) :::.........."<<endl<<endl<<endl;
    cout << "                               ........:::: Input a character: ";cin>>L;cout<<endl<<endl;

    *result = CheckLetter(letter);

    if (*result == true){
        S = TypeOfLetter(letter);
        cout<<endl;
        if (S == false){
            cout <<"                            .........::::: The letter "<<*letter<<" is a consonant."<<endl;
        }
    }
    else cout<<"                                    .....::::: "<< *letter << " is NOT a letter." << endl; cout<<endl;

    delete letter; delete result;
    return 0;
}

bool CheckLetter(char *letter){

    if((65<=char(*letter) & char(*letter)<=90) || (97<=char(*letter) & char(*letter)<=122)){
        return true;
    }
    else return false;
}

bool TypeOfLetter(char *letter){

    const static char vowels[10]= {'a','e','i','o','u','A','E','I','O','U'};

    for (unsigned short int i =0; i<10; i++) {
        if (vowels[i] == *letter) {
            cout<<"                             ......::::: The letter "<<*letter << " is a vowel." <<endl;
            return true;
        }
    }
    return false;
}
