#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std ;

int main(void) {

int a,b,c;

cout<<"digite um numero inteiro: "<<endl;
cin>>a ;
cout << "digite outro numero inteiro: "<<endl;
cin>> b ;

c= pow(a,2) + 2 * b + c ;

cout << "o resultado da expressão é: "<< c << endl;


    return 0;
}

// os resultado da primeira expressão foram diferentes da primeira por conta
// da precedência dos operadores e por conta da separão por parenteses.
