#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int codigo, quantidade;

    double valorPagar;

    cin >> codigo >> quantidade;

    cout << fixed;
    cout << setprecision(2);

    switch(codigo){
        case 1:
            valorPagar = quantidade * 4.00;
            cout << "Total: R$ " << valorPagar << endl;
        break;
        case 2:
            valorPagar = quantidade * 4.50;
            cout << "Total: R$ " << valorPagar << endl;
        break;
        case 3:
            valorPagar = quantidade * 5.00;
            cout << "Total: R$ " << valorPagar << endl;
        break;
        case 4:
            valorPagar = quantidade * 2.00;
            cout << "Total: R$ " << valorPagar << endl;
        break;
        case 5:
            valorPagar = quantidade * 1.50;
            cout << "Total: R$ " << valorPagar << endl;
        break;
        default:
        return 0;
    }
}
