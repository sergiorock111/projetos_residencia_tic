#include <iostream>
#include <string>

using namespace std;

int main(void){
    unsigned long int uli;
    long int li = 0;
    uli = 0xffffffff;


    cout << "Valor inicial da var unsigned long int é: " << uli<< endl; 
    cout << "Valor inicial da var long int é: " << li << endl; 
    cout << endl; 
    cout << endl; 

    li = uli;
    cout << "Valor final da var long int:" << li<< endl; 
    uli = li;
    cout << "Valor final da var unsigned long int: " << uli<< endl; 


    
    return 0;
}