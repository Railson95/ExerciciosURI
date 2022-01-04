#include <iostream>

using namespace std;

int main(){
    int id, HorasT;
    double valHora, salario;

    cin >> id;
    cin >> HorasT;
    cin >> valHora;
    salario = (HorasT*valHora);

    cout << fixed;
    cout.precision(2);

    cout << "NUMBER = " << id << endl;
    cout << "SALARY =" << " U$ "<< salario << endl;
    cout << "SALARY = U$ " << salario << endl;
    return 0;
}


