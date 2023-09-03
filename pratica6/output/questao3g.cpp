#include <iostream>
#include <cctype> 
using namespace std; 

int main() {
    char ch1, ch2, ch3;

    cout << "Digite o primeiro caractere: ";
    cin >> ch1;

    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // Determinando se um inteiro representa um caractere de dígito decimal.
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';

    
    cout << "ch3: " << ch3 << std::endl;

    return 0;
}
