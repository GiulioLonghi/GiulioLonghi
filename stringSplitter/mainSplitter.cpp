/*
lezione 19/11

TEORIA:
stack-->memoria statica
heap-->memoria dinamica
ogni celletta della memoria è di 8 bit
dimensione bit = dipende dal compilatore (32 bit)
un puntatore occupa a 64 bit (spazio dell'indirizzo), qualsiasi tipo sia
ricorda: array = puntatore della prima cella di memoria occupata dalla sequenza
!! a[2] == *(a+2)
int * a --> a++ prende indirizzo in a e aggiunge la dimensione del tipo (+ 4 celle)

data una stringa in ingresso e un carattere (delimiter=token)
stampare sezioni della stringa delimitate dal carattere

1) individuare i delimitatori

2) copiare pezzo di stringa in un altro array e aggiungere delimitatore \o

3) stampare
*/

#include <cstring>
#include <iostream>

#include "splitterUtils.hpp"

using namespace std;

#define LEN 100
#define TEMPLEN 25 //dim array d'appoggio

int main()
{
    char toSplit[LEN];
    char temp[TEMPLEN];
    char tokenBuff[2];
    char token = ' ';

    cout << "Enter a string to split: ";
    cin.getline(toSplit, LEN); //per prendere tutta la stringa

    cout << "Enter token: ";
    cin.getline(tokenBuff, 2);
    token = tokenBuff[0];

    char* startP = toSplit;
    char* endP;
    //endp = tokenFinder(startP, token)

    while ((endP = tokenFinder(startP, token)) != NULL) {
        //step 2 - string copy
        char* pTemp = temp;
        for (char* p = startP; p < endP; p++, pTemp++) {
            *pTemp = *p;
        }
        *pTemp = '\0';

        //vedi con strncpy


        //step 3 - print string
        cout << temp <<endl;

        startP = endP +1;
    }
    cout << startP <<endl;
}
