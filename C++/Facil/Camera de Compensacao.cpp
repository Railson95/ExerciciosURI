#include <iostream>

using namespace std;

struct Lista{
    int receber;
    int doar;
};

int main(){

    int numCheques, numHabitantes, pessoa1, valorPassado, pessoa2, somaDoar, somaReceber;

    cin >> numCheques;
    cin >> numHabitantes;

    Lista l[numCheques][numHabitantes];
    Lista listaEquivalencia[numCheques][numHabitantes];

    //preenchendo matriz com -1
    for(int linha = 0; linha < numCheques; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            l[pessoa1][pessoa2].doar = -1;
            l[pessoa2][pessoa1].receber = -1;
        }
    }

    //coletando dados do usuario
    for(int linha = 0; linha < numCheques; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            cin >> pessoa1;
            cin >> valorPassado;
            cin >> pessoa2;
            l[pessoa1][pessoa2].doar = l[pessoa1][pessoa2].doar + valorPassado;
            l[pessoa2][pessoa1].receber = l[pessoa2][pessoa1].receber + valorPassado;
        }
    }

    //criando lista de equivalencia
    somaDoar = 0;
    somaReceber = 0;
    for(int linha = 0; linha < numCheques; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            if (l[linha][coluna].doar != -1 && l[linha][coluna].receber != -1){
                somaDoar = somaDoar + l[linha][coluna].doar;
                somaReceber = somaReceber + l[linha][coluna].receber;
            }
        }
    }



    return 0;
}


