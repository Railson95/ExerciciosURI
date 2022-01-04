#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> monte;
    list<int>::iterator k;
    list<int>::iterator j;


    int numTotalFigurinhas, numFigurinhasCompradas, numFigurinha;

    cin >> numTotalFigurinhas;
    cin >> numFigurinhasCompradas;

    int vetFigurinhas[numFigurinhasCompradas];

    for(int i = 0; i < numFigurinhasCompradas; i++){
        cin >> numFigurinha;
        vetFigurinhas[i] = numFigurinha;
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


    int quantidadeFigurinhasFaltantes = numTotalFigurinhas - monte.size();

    cout << quantidadeFigurinhasFaltantes << endl;


    return 0;
}


