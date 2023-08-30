#include <stdio.h>
#include <iostream> 
using namespace std;

int main(void)
{

float soma , subtracao , multiplicacao , a , b , divisao;
 
 // entradas dos valores 
std::cout << "iremos fazermos operações de soma, subtração, multiplicação, divisão, e resto da divisão. "<< endl;
std::cout << "digite um numero real: ";
std::cin >> a;
std::cout << "digite outro numero real: ";   
std::cin >> b; 

// fazendo os calculos 
soma = a+b;
subtracao = a-b;
multiplicacao = a * b;
divisao = a / b;


// retornand)o os resultados 
std::cout << "a soma = " << soma << std::endl;
std::cout  << "a subtração = " << subtracao << std::endl;
std::cout  << "a multiplicação = "<< multiplicacao << std::endl;
std::cout << " a divisão: = " << divisao << std::endl;


return 0;
}