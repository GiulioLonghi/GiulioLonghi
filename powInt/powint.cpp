#include <iostream>
using namespace std;

int powInt (int base, int exp);

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

int powInt (int base, int exp)
{
    int pow=1;
    for (int i=0; i<exp; i++) {
        pow *= base;
    }
    return pow;
}
