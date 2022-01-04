#include <iostream>
#include <list>
#include <cstdlib>

using namespace std;

int verificaFigurinhasCarimbadasExistentes(list<int> vetorFigurinhasJaCompradas,int aux3,int numFigCompradas,int contadorFigCarimbadas, int numFigCarimbadas, int vetorFigurinhasCarimbadas[] ){
    list<int>::iterator k;
    k = vetorFigurinhasJaCompradas.begin();
    aux3 = *k;
    int flag = 0;
    while(flag <= numFigCarimbadas){
        for(k = vetorFigurinhasJaCompradas.begin(); k != vetorFigurinhasJaCompradas.end(); k++){
            if(aux3 == *k){
                contadorFigCarimbadas++;
            }
        }
        aux3 = vetorFigurinhasCarimbadas[flag];
        flag++;
    }

    contadorFigCarimbadas = contadorFigCarimbadas - 1;
    int soma = 0;
    if(contadorFigCarimbadas == 0){
        soma = contadorFigCarimbadas + numFigCarimbadas;
    } else {
        if(contadorFigCarimbadas > 0 && numFigCarimbadas > contadorFigCarimbadas){
            soma = abs(contadorFigCarimbadas - numFigCarimbadas);
        }
    }

    cout << soma << endl;
}

list<int> retornaFigurinhasSemRepetir(int numFigurinha, int numFigCompradas,int vetorFigurinhasJaCompradas[]){
    list<int> monte;
    list<int>::iterator k;
    list<int>::iterator j;


    int numTotalFigurinhas = numFigurinha, numFigurinhasCompradas = numFigCompradas;

    int vetFigurinhas[numFigurinhasCompradas];

    for(int i = 0; i < numFigurinhasCompradas; i++){
        vetFigurinhas[i] = vetorFigurinhasJaCompradas[i];
    }

    //verificando se a figurinhas repetidas

    int posAux = 0, contador = 0, valAux;
    bool jaTaNoMonte;
    int aux = vetFigurinhas[posAux];
    monte.push_back(vetFigurinhas[posAux]);

    while(posAux < numFigurinhasCompradas - 1){

        int aux = vetFigurinhas[posAux + 1];

        valAux = -1;
        jaTaNoMonte = false;
        for(k = monte.begin(); k != monte.end(); k++){
            for(j = monte.begin(); j != monte.end(); j++){
                if(aux == *j && posAux != 0){
                    jaTaNoMonte = true;
                }
            }
            if(aux != *k && valAux == -1 && jaTaNoMonte == false){
                //verifica se ja ta no monte
                monte.push_back(aux);
                valAux = aux;
            }
        }
        posAux++;
    }

    return monte;
}

int main(){

    int numFigurinha, numFigCarimbadas, numFigCompradas, aux1, aux2, aux3, contadorFigCarimbadas = 0;
    cin >> numFigurinha;
    cin >> numFigCarimbadas;
    cin >> numFigCompradas;
    int vetorFigurinhasCarimbadas[numFigCarimbadas], vetorFigurinhasJaCompradas[numFigCompradas];

    for(int i = 0; i < numFigCarimbadas; i++){
        cin >> aux1;
        vetorFigurinhasCarimbadas[i] = aux1;
    }

    for(int i = 0; i < numFigCompradas; i++){
        cin >> aux2;
        vetorFigurinhasJaCompradas[i] = aux2;
    }

    //retorna figurinhas nao repetidas
    verificaFigurinhasCarimbadasExistentes(retornaFigurinhasSemRepetir(numFigurinha, numFigCompradas,vetorFigurinhasJaCompradas),
                                           aux3, numFigCompradas, contadorFigCarimbadas,numFigCarimbadas, vetorFigurinhasCarimbadas);



    return 0;

}
