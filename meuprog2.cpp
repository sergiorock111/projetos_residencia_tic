#include <iostream>
using namespace std;
int main()
{

int soma , subtracao , multiplicacao , a , b , divisao , resto;
 
  
cout << "iremos fazermos operações de soma, subtração, multiplicação, divisão, e resto da divisão. "<< endl; 
cout << "digite um numero inteiro: " ;
cin >> a;
cout << "digite outro numero inteiro: ";   
cin >> b; 


soma = a+b;
subtracao = a-b;
multiplicacao = a*b;
divisao = a/b;
resto = a%b;

 
cout << "a soma = " << soma << endl;
cout << "a subtração = " << subtracao << endl;
cout << "a multiplicação = "<< multiplicacao << endl;
cout << "a divisão = " << divisao << endl;
cout << "o resto = " << resto << endl;

return 0;
}