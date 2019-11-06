#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int maior = 0, x;

    while(1){
        cout << "Digite um numero:" << endl;
        cin >> x;
        if(x > maior){
            maior = x;
        }
        if(x == 0){
            break;
        }
    }

    cout << "\nO maior valor eh:" << maior << endl;

    return 0;
}
