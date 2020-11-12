// Your First C++ Program

#include <iostream>

#define NUM 42

int main() {
    std::cout << "Hello World!"<< std::endl
              << NUM << std::endl;
    return 0;
}

/*scrivo a terminale "g++ -S -save-temps hello/hellp.cpp"
e mi mostra due file:
1) file assembler --> istruzioni cpu e prodotto quasi finale della compilazione
2)file di quello che c'è dentro iostream, con in fondo il nostro programma dove sono
spariti gli include e i define #
*/