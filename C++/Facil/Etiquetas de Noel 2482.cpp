#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct FelizNatal{
    string idioma;
    string traducao;
};

struct Crianca{
    string nome;
    string idiomaDaCrianca;
};

void verificaIdioma(vector<FelizNatal> &f, vector<Crianca> &c)
{
    vector<FelizNatal>::iterator k;
    vector<Crianca>::iterator k2;

    for(k2 = c.begin(); k2 != c.end(); k2++){
        for(k = f.begin(); k != f.end(); k++){
            int n1,n2;
            //converto a string para um vetor de char para usar a strcmp
            n1 = k2->idiomaDaCrianca.length();
            n2 = k->idioma.length();
            char leftStr[n1 + 1];
            char rightStr[n2 + 1];
            strcpy(leftStr, k2->idiomaDaCrianca.c_str());
            strcpy(rightStr, k->idioma.c_str());
            int resp = strcmp(leftStr, rightStr);
            if(resp == 0){
                cout << k2->nome << endl;
                cout << k->traducao << endl;
                cout << "\n";
            }
        }
    }

}

int main(){
    vector<FelizNatal> v;
    vector<Crianca> c;
    string idi, tradu, nome2, idiomaDaCrianca2;
    int n=0, m=0;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin >> idi;
        cin.ignore();//ignora a quebra de linha /n, senao o getline vai pula parte da string e vai pra próxima linha
        getline(cin, tradu);
        FelizNatal f;
        f.idioma = idi;
        f.traducao = tradu;
        v.push_back(f);
    }

    cin>>m;

    for(int i = 0; i < m; i++){
        cin.ignore();//ignora a quebra de linha /n, senao o getline vai pula parte da string e vai pra próxima linha
        getline(cin, nome2);
        cin >> idiomaDaCrianca2;
        Crianca cr;
        cr.nome = nome2;
        cr.idiomaDaCrianca = idiomaDaCrianca2;
        c.push_back(cr);
    }

    verificaIdioma(v,c);

    return 0;

}
