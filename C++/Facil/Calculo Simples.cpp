#include <iostream>

using namespace std;

int main(){

    int codP1, NumP1, codP2, NumP2;
    double ValU1, ValU2, totalPagar;

    cin >> codP1;
    cin >> NumP1;
    cin >> ValU1;

    cin >> codP2;
    cin >> NumP2;
    cin >> ValU2;

    totalPagar = NumP1*ValU1 + NumP2 * ValU2;

    cout << fixed;
    cout.precision(2);

    cout << "VALOR A PAGAR:" << " R$ " << totalPagar << endl;

    return 0;
}


