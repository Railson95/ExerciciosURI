#include <iostream>
#include <string>
using namespace std;

int main(){
    string nomeV;
    double SFixo, TotalVendas, comissao, TotalReceber;

    getline(cin, nomeV);
    cin >> SFixo;
    cin >> TotalVendas;

    comissao = TotalVendas * 15/100;

    TotalReceber = comissao + SFixo;

    cout << fixed;
    cout.precision(2);

    cout << "TOTAL =" << " R$ " << TotalReceber << endl;

    return 0;
}


