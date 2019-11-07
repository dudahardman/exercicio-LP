#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
    float n, face;
    int face1 = 0, face2 = 0, face3 = 0, face4 = 0, face5 = 0, face6 = 0;

    cout << "Digite o numero de lancamentos do dado: " << endl;
    cin >> n;


    for(int i = 0; i < n; i++){
        face = 1 + rand() % 6;
        if(face == 1){
            face1++;
        }
        if(face == 2){
            face2++;
        }
        if(face == 3){
            face3++;
        }
        if(face == 4){
            face4++;
        }
        if(face == 5){
            face5++;
        }
        if(face == 6){
            face6++;
        }
    }

    cout << "face 1 apareceu " << (face1 / n) * 100.0 << "%" << endl;
    cout << "face 2 apareceu " << (face2 / n) * 100.0 << "%" << endl;
    cout << "face 3 apareceu " << (face3 / n) * 100.0 << "%" << endl;
    cout << "face 4 apareceu " << (face4 / n) * 100.0 << "%" << endl;
    cout << "face 5 apareceu " << (face5 / n) * 100.0 << "%" << endl;
    cout << "face 6 apareceu " << (face6 / n) * 100.0 << "%" << endl;

    return 0;
}
