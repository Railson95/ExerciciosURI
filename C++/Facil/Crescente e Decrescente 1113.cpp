#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    int a = 5, b = 4;
    list<string> aux;
    list<string>::iterator k;

    while(a!=b){
        cin >> a;
        cin >> b;
        if(a > b){
            aux.push_back("Decrescente");
        } else {
            if(a < b){
                aux.push_back("Crescente");
            }
        }
    }

    for(k = aux.begin(); k != aux.end(); k++){
        cout << *k << endl;
    }
}
