#include <iostream>
#include <stdio.h>
using namespace std;

int main()

int num,mayor=0;
double promedio;
char resp;c
do
{   do
    { cout<<"Ingresar un numero entre 1-100..>";
    cin>>num;
    }while(!(num>=50) and (num<=100))

    do
    {   cout<<"Desea continuar...;";
        cin.get(resp);
        _flushall();
    }while ((toupper(resp) !'S') and (toupper(resp) !='N'));
    suma = suma + num;
    if (num>mayor)
    {   mayor = num;
    }
    conta++;
    while ((toupper(resp)=='S'));
    promedio= suma/conta;
    cout<<"Promedio "<<promedio<<"\n";
    cout<<"Mayor es "<<mayor<<"\n";

    return 0;
}

