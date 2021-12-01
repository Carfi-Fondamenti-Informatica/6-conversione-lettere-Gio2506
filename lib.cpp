#include "lib.h"
bool ingresso (char a) {
    if ((a >= 65 and a <= 90) or (a >= 97 and a <= 122)) {
        return true;
    } else {
        return false;
    }
}
char convertitore (char a){
    if (a>=97 and a<=122){
        a=a-32;
        return a;
    }else if (a>=65 and a<=90){
        a=a+32;
        return a;
    }
}
