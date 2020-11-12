#include "powInt.hpp"

//file di sorgente
int powInt (int base, int exp)
{
    int pow=1;
    for (int i=0; i<exp; i++) {
        pow *= base;
    }
    return pow;
}
