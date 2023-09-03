#include <iostream>
#include <stdio.h>
using namespace std ;

int main(void) {

int num1,num2,num3=0;

cout << "digite um numero inteiro" << endl; 
cin >> num1;
cout << "digite outro numero inteiro" << endl;
cin >> num2 ;

if (num1>num2)

     num3=num1;
else 

    num3=num2;


cout<< num3 << " é o maior "<< endl; 


return 0; 


}