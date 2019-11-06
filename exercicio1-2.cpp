#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
    int x, numero;

    cout << "Adivinhe o numero entre 1 e 100" << endl;
    numero = 1 + rand() % 100;

    while(1){
        cin >> x;
        if(x == numero){
            cout << "Parabens voce adivinhou o numero" << endl;
            break;
        }
        if (x > numero){
            cout << "Muito alto. Tente novamente." << endl;
        }
        if (x < numero){
            cout << "Muito baixo. Tente novamente." << endl;
        }

    }


    return 0;
}
