#include <iostream>
#include "powInt.hpp"
using namespace std;

int main()
{
    int a, b;
    cout<<"Inserisci la base: ";
    cin>>a;
    cout<<endl;

    cout<<"Inserisci l'esponente: ";
    cin>>b;
    cout<<endl;

    cout<<a<<"^"<<b<<" = "<<powInt (a, b)<<endl;
}
