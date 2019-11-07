#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

double CalculaPercentual(double n, double t){
    double percentual = 0;

    percentual = (n / t) * 100.0;

    return percentual;
}

int main(){
    double voto[24]={1}, cont=0;
    int i;
    int camisa = 1;

    cout << "\t\tENQUETE: Quem foi o melhor jogador" << endl;

    while(1){
            cout << "\nDigite um numero de 1 a 23:" << endl;
            cin >> camisa;
        if(camisa != 0){
            cout << "Numero do jogador: " << camisa << endl;
            cont++;
        }else{
            break;
        }
        if (camisa < 1 || camisa > 23){
            cout << "Informe um numero valido\n" << endl;
        }

        voto[camisa]++;

    }

    cout << "\n\t\tResultado da votacao:\n" << endl;
    cout << "\nForam computados " << cont << " votos.\n" << endl;
    cout << "Jogador        Votos       Percentual" << endl;

    for(i = 1; i <= 23; i++){
        if(voto[i] != 0){
            cout << i << "\t\t" << voto[i] << "\t\t" << CalculaPercentual(voto[i], cont) << "%" << endl;
        }
    }

    return 0;
}
