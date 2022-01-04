#include <iostream>

using namespace std;

int main(){
    int tamSeq, num, contador = 0;
    cin >> tamSeq;
    int vetor[tamSeq];

    int eEscadinha[tamSeq][tamSeq];

    //preenchendo eEscadinha

    for(int i = 0; i < tamSeq; i++){
        for(int j = 0; j < tamSeq; j++){
            eEscadinha[i][j] = 5000000;
        }
    }

    for(int i = 0; i < tamSeq; i++){
        cin >> num;
        vetor[i] = num;
    }

    int aux = vetor[1] - vetor[0];
    eEscadinha[0][0] = vetor[0];
    eEscadinha[0][1] = vetor[1];
    int linhaEscadinha = 0;
    int colunaEscadinha = 2;
    bool mudaColuna = false;
    for(int i = 2; i < tamSeq; i++){
        if(vetor[i] - vetor[i-1] == aux){
            if(mudaColuna == true){
                colunaEscadinha++;
                mudaColuna = false;
            }
            if(eEscadinha[linhaEscadinha][colunaEscadinha] == 5000000){
                eEscadinha[linhaEscadinha][colunaEscadinha] = vetor[i];
                aux = vetor[i] - vetor[i-1];

                if(vetor[i+1] - vetor[i] == aux){
                    eEscadinha[linhaEscadinha][colunaEscadinha + 1] = vetor[i + 1];
                } else {
                    //colunaEscadinha++;
                    if(vetor[i + 1] - vetor [i] == vetor[i] - vetor[i-1]){
                        linhaEscadinha++;
                        colunaEscadinha = 0;
                        eEscadinha[linhaEscadinha][colunaEscadinha] = vetor[i - 1];
                        eEscadinha[linhaEscadinha][colunaEscadinha+1] = vetor[i];
                        aux = vetor[i+1] - vetor[i];
                        mudaColuna = true;
                    }
                }
            } else {
                eEscadinha[linhaEscadinha][colunaEscadinha+1] = vetor[i];
                aux = vetor[i] - vetor[i-1];
                colunaEscadinha++;
            }
        }

        if(vetor[i] - vetor[i-1] != aux){
            linhaEscadinha++;
            colunaEscadinha = 0;

            if(vetor[i] - vetor[i-1] != vetor[i-1] - vetor[i-2]){
                eEscadinha[linhaEscadinha][colunaEscadinha] = vetor[i - 1];
                eEscadinha[linhaEscadinha][colunaEscadinha+1] = vetor[i];
                aux = vetor[i] - vetor[i-1];
                mudaColuna = true;
            } else {
                eEscadinha[linhaEscadinha][colunaEscadinha] = vetor[i];
                aux = vetor[i+1] - vetor[i];
                mudaColuna = true;
            }
        }
    }

    for(int i = 0; i < tamSeq; i++){
        if(eEscadinha[i][0] != 5000000){
            contador++;
        }
    }
    cout << contador << endl;

    return 0;

}
