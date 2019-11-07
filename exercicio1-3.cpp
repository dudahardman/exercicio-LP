#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
    float n;
    int i, face[7] = {1}, aleatorio;

    cout << "Digite o numero de lancamentos do dado: " << endl;
    cin >> n;


    for(i = 0; i < n; i++){
        aleatorio = 1 + rand() % 6;
        face[aleatorio]++;

    }

    for(i = 1; i <= 6; i++){
         cout.precision(3);
         cout << "Face " << i << " apareceu " << (face[i] / n) * 100.0 << "%" << endl;
    }


    return 0;
}
