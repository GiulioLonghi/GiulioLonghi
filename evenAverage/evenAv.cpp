// media float dei numeri interi pari 
#include <iostream>
using namespace std;

int main (){
    int num, conta = 0;
    int somma = 0; //float cosi diventa float anche la media, altrimenti forzare

    cout<<"Interger?"<<endl;
    cin>>num;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            somma += num;
            conta++;
        }
        cout<<"Interger?"<<endl;
        cin>>num;
    }
    cout<<"Average: "<<(float)somma/conta; // operatore cast --> warning perchè è una cosa del C 
    return 0;
}