#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;


bool ordenar(const int &a, const int &b){
    return a<b;
}

int main()
{
    string comparar = "Iloveyou";

    string frase;

    vector<int> vetorMenor;

    int k = 0, I = 0, l = 0, v = 0, e = 0, y = 0, o = 0, u = 0;

    getline(cin, frase);

    for(int b = 0; b < frase.size(); b++){
        if(frase[b] == 'I'){
            I++;
        }

        if(frase[b] == 'l'){
            l++;
        }

        if(frase[b] == 'v'){
            v++;
        }

        if(frase[b] == 'e'){
            e++;
        }

        if(frase[b] == 'y'){
            y++;
        }

        if(frase[b] == 'o' && frase[b-1] == 'l' && frase[b+1] == 'v'){
            o++;
        }

        if(frase[b] == 'o' && frase[b-1] == 'y' && frase[b+1] == 'u'){
            o++;
        }

        if(frase[b] == 'o' && frase[b-1] == 'u' && frase[b+1] == 'y'){
            o++;
        }

        if(frase[b] == 'o' && frase[b-1] == 'v' && frase[b+1] == 'l'){
            o++;
        }

        if(frase[b] == 'u'){
            u++;
        }

    }

    vetorMenor.push_back(I);
    vetorMenor.push_back(l);
    vetorMenor.push_back(v);
    vetorMenor.push_back(e);
    vetorMenor.push_back(y);
    vetorMenor.push_back(o/2);
    vetorMenor.push_back(u);

    sort(vetorMenor.begin(), vetorMenor.end(), ordenar);

    vector<int>::iterator it;

    it = vetorMenor.begin();

    cout << *it << endl;

    return 0;
}
