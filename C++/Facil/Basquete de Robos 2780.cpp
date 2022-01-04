#include <iostream>

using namespace std;

int main(){

    int distancia, pontuacao;

    cin >> distancia;

    if (distancia <= 800){
        pontuacao = 1;
    }

    if(distancia > 800 && distancia <= 1400){
        pontuacao = 2;
    }

    if(distancia > 1400 && distancia <= 2000){
        pontuacao = 3;
    }

    cout << pontuacao << endl;

    return 0;
}


