// The program reads  N numbers from the user and prints the sum

#include <iostream>

#define N 10 //così si scrive solo qui, N non è una variabile

using namespace std;

int main()
{
    int numbers[N];

    cout << "Insert "<<N<<" numbers: "<<endl;
    for (int i = 0; i < N; i++){
        cin>>numbers[i];
    }

    int sum = 0;

    for (int i = 0; i < N; i++){
        sum += numbers[i];
    }

    cout<<"Sum ="<<sum<<endl;

}