#include <iostream>

using namespace std;

int main()
{
    char C;
    int N, P, Q;
    int resultado;

    cin >> N >> P;
    cin >> C;
    cin >> Q;

    if(C == '+'){
        resultado = P + Q;
    } else {
        resultado = P * Q;
    }

    if(resultado > N){
        cout << "OVERFLOW" << endl;
    } else {
        cout << "OK" << endl;
    }


}
