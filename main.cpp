#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char a=0;
    cin>>a;
    bool risultato=ingresso(a);
    if (risultato){
        cout<< convertitore(a);
    }else{
        cout<<"errore"<<endl;
    }
    return 0;
}
