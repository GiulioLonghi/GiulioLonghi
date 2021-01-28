#include <iostream>
#include <cstring>

#define L 100

using namespace std;

int main ()
{
    char s[L], t[L];
    char c;

    cout << "Inserire stringa 1: ";
    cin.getline(s, L) >> s;

    cout << endl << s << endl;

    cout << "Inserire stringa 2: ";
    cin.getline(t, L) >> t;

    cout << endl << t << endl;

    cout << "Inserire carattere: ";
    cin.get(c) >> c;

    cout << endl << c;

/*
    cout << endl << "Funzioni: " << endl;

    cout << "strlen --> " << strlen(s) << endl;
    cout << "strchr --> " << strchr(s, c) << endl;
    cout << "strrchr --> " << strrchr(s, c) << endl;
    cout << "strstr --> " << strstr(s, t) << endl;
*/
    return 0;
}