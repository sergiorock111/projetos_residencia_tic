#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(void){
    unsigned  int ui;
    long int li = LONG_MAX;


    cout << "Valor inicial da var unsigned int é: " << ui<< endl; 
    cout << "Valor inicial da var long int é: " << li << endl; 
    cout << endl; 
    cout << endl; 

    ui = li;
    cout << "Valor final da var unsigned  int depois da atribuição: é " << ui<< endl; 

    li = ui ;
    cout << "Valor final da var long int depois da atribuição: " << li<< endl; 

    /* Considerações
         as variaveis  unsigned long int quanto  long int, utilizam 4 Bytes d memória, e se diferencia quando o limit 
         do intervalo do tipo  long int é maior em relação a unsigned  int;

    
    */
    
    return 0;
}