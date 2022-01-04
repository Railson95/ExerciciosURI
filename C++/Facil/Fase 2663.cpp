#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ordenar(const int &a, const int &b){
    return a > b;
}

void verificaGanhadores(vector<int> v, int numMin){
   vector<int>::iterator it;
   vector<int> aux;
   int varAux;

   for(it = v.begin(); it != v.end(); it++){
      if(aux.size() < numMin){
         aux.push_back(*it);
         varAux = *it;
      } else {
         if(*it == varAux){
            aux.push_back(*it);
         }
      }
   }

   cout << aux.size() << endl;

}

int main(){
   vector<int> v;
   vector<int>::iterator it;
   int numCompetidores, numMinimoCompetidores, pontuacao, i = 0;

   cin >> numCompetidores >> numMinimoCompetidores;

   while(numCompetidores > i){
        cin >> pontuacao;
        v.push_back(pontuacao);
        i++;
   }

   sort(v.begin(), v.end(), ordenar);

   verificaGanhadores(v, numMinimoCompetidores);
}

