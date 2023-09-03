#include <stdio.h>
#include <iostream> 
using namespace std;

int main(void)
{

float soma , subtracao , multiplicacao , a , b , divisao;
 
 
cout << "iremos fazermos operações de soma, subtração, multiplicação, divisão, e resto da divisão. "<< endl;
cout << "digite um numero real: ";
cin >> a;
cout << "digite outro numero real: ";   
cin >> b; 


soma = a+b;
subtracao = a-b;
multiplicacao = a * b;
divisao = a / b;



cout << "a soma = " << soma << endl;
cout  << "a subtração = " << subtracao << endl;
cout  << "a multiplicação = "<< multiplicacao << endl;
cout << " a divisão: = " << divisao << endl;


return 0;
}