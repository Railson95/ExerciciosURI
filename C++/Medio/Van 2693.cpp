#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Passageiro{
    string nome;
    char regiaoQueMora;
    int custoEntCidadeAteCasa;
};

bool ordernarCusto(const Passageiro &a, const Passageiro &b)
{
    return a.custoEntCidadeAteCasa < b.custoEntCidadeAteCasa;
}

void verificaCusto(vector<Passageiro> &p){

    vector<Passageiro>::iterator it;
    vector<Passageiro>::iterator aux;
    Passageiro temp, temp2;
    int i = 0;

    while(p.size() > i){
        aux = p.begin() + i;

        for(it = aux; it != p.end(); it++){
            if(aux->custoEntCidadeAteCasa == it->custoEntCidadeAteCasa){
                if(aux->regiaoQueMora > it->regiaoQueMora){
                    //cout << "Entrei aq! " << endl;
                    temp.nome = it->nome;
                    temp.regiaoQueMora = it->regiaoQueMora;
                    temp.custoEntCidadeAteCasa = it->custoEntCidadeAteCasa;

                    temp2.nome = aux->nome;
                    temp2.regiaoQueMora = aux->regiaoQueMora;
                    temp2.custoEntCidadeAteCasa = aux->custoEntCidadeAteCasa;

                    *it = temp2;
                    *aux = temp;

                }

            }
        }
    i++;
    }
}

void verificaRegiao(vector<Passageiro> &p){

    vector<Passageiro>::iterator it;
    vector<Passageiro>::iterator aux;
    Passageiro temp, temp2;
    int i = 0;

    while(p.size() > i){
        aux = p.begin() + i;

        for(it = aux; it != p.end(); it++){
            //cout << "Entrei aq! " << endl;
            if(aux->regiaoQueMora == it->regiaoQueMora && aux->custoEntCidadeAteCasa > it->custoEntCidadeAteCasa){
                //cout << "Entrei aq! " << endl;
                if(aux->nome > it->nome){
                    //cout << "Entrei aq! " << endl;
                    //cout << "aux->nome: " << aux->nome << " it->nome: " << it->nome << endl;
                    temp.nome = it->nome;
                    temp.regiaoQueMora = it->regiaoQueMora;
                    temp.custoEntCidadeAteCasa = it->custoEntCidadeAteCasa;

                    temp2.nome = aux->nome;
                    temp2.regiaoQueMora = aux->regiaoQueMora;
                    temp2.custoEntCidadeAteCasa = aux->custoEntCidadeAteCasa;

                    *it = temp2;
                    *aux = temp;

                }

            }
        }
    i++;
    }
}


int main(){
    vector<Passageiro> v;
    vector<string> aux;
    vector<Passageiro>::iterator it;
    vector<string>::iterator it2;
    int qtdPessoas;
    string n;
    char r;
    int c;
    while(cin >> qtdPessoas){

        for(int i = 0; i < qtdPessoas; i++){
            cin >> n >> r >> c;
            Passageiro p;
            p.nome = n;
            p.regiaoQueMora = r;
            p.custoEntCidadeAteCasa = c;
            v.push_back(p);
        }

        sort(v.begin(), v.end(), ordernarCusto);
        //sort(v.begin(), v.end(), ordernarNome);
        verificaCusto(v);
        verificaRegiao(v);

        for(it = v.begin(); it != v.end(); it++){
            aux.push_back(it->nome);
        }

        v.erase(v.begin(), v.end());

    }

    for(it2 = aux.begin(); it2 != aux.end(); it2++){
        cout << *it2 << endl;
    }

    return 0;
}

