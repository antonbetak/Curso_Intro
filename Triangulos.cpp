// Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<math.h>
#include <string>
#include <stdio.h>
using namespace std;
int perimentro;
int lado;
int area;

int main()
{
    float l1,l2,l3,b,h,area;
    cout<< "Dame el valor de la variable (3): ";
    cin>>l1;
    cin>>l2;
    cin>>l3;
    if(l1==l2&&l2==l3)
    cout<<"Equilatero.";
    else if(l1==l2|| l2==l3||l3==l1)
    cout<<"isoceles.";
    else cout<<"Escaleno.";
    cout<<"\n";
    perimentro=l1+l2+l3;
    cout<<"El perimetro es: "<<perimentro;
    cout<<"\n";
    cout<< "Ingrese la base del triangulo: ";
    cin>>b;
    cout<<"Ingrese la altura del triangulo: ";
    cin>>h;
    area=(b*h)/2;
    cout<<"El area de tu triangulo es: "<<area;
 
}
