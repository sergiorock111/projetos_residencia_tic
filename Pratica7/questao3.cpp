
#include <iostream> 
#include <stdio.h> 
using namespace  std;


int main(void){

int a,c;
cout << "digite um numero inteiro ";
cin >> a; 

for (c=1;c<=a;c++) {

    if (a%c==0)
    cout <<"os multiplos do numero escolhido é "<< c << endl ;

};
 

return 0;
}

