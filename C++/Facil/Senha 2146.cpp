#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> x;
    vector<int>::iterator k;
    int valor, N;
    cin >> N;
    int i = 0;

    while(i<N){
        cin >> valor;
        x.push_back(valor);
        i++;
    }

    for(k = x.begin(); k != x.end(); k++){
        cout << (*k) - 1 << endl;
    }
}
