#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {

    const int numStrings = 10;
    const int tamanhoString = 10;

    vector<string> stringsAleatorias(numStrings);

    for (int i = 0; i < numStrings; i++) {
        string novaString = "";

        for (int j = 0; j < tamanhoString; j++) {
            char caractereAleatorio = 'a' + rand() % ('z' - 'a' + 1);
            novaString += caractereAleatorio;
        }

        if (!novaString.empty()) {
            novaString[0] = toupper(novaString[0]);
        }

        stringsAleatorias[i] = novaString;
    }

    cout << "Lista de Strings Geradas:" << endl;
    for (int i = 0; i < numStrings; i++) {
        cout << "String " << i + 1 << ": " << stringsAleatorias[i] << endl;
    }

    return 0;
}
