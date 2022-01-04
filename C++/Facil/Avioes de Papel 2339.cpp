#include <iostream>

using namespace std;


int main()
{
    int C, P, F;

    cin >> C >> P >> F;

    double aux = P/C;

    if(aux >= F){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
}
