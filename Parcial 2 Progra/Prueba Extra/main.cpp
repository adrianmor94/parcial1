#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>

using namespace std;
int num[5], mayor=0, menor=999999;

int numeros()
{
    int numero=0;
    do
    {
        numero = 50 + rand() % (150-50);
    }
    while (!(((numero>49) and (numero<151)) and (numero%2==0)));
    return numero;
}

void datos(int num[])
{
    int i;
    for(i=0;i<5;i++)
    {
        num[i]= numeros();
    }
}

void mayormenor(int num[], int &mayor, int &menor)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(num[i]>mayor)
        {
            mayor = num[i];
        }
        if(num[i]<menor)
        {
            menor = num[i];
        }
    }
}

void presentar(int num[])
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Posicion "<<i<<" numero es...."<<num[i]<<"\n";
    }
}

int main()
{
    srand(time(0));
    datos(num);
    mayormenor(num, mayor, menor);
    presentar(num);
    cout<<"Numero mayor es...."<<mayor<<"\n";
    cout<<"Numero menor es...."<<menor<<"\n";

    return 0;
}
