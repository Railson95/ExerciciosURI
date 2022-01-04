#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salario, taxa;
    cout << fixed;
    cout << setprecision(2);

    cin >> salario;

    if(salario <= 2000){
        cout << "Isento" << endl;
    }

    if(salario > 2000 && salario <= 3000){
        taxa = (salario - 2000) * 0.08;
        cout << "R$ " << taxa << endl;
    }

    if(salario > 3000 && salario <= 4500){
        taxa = 1000 * 0.08;
        taxa = taxa + 0.18*(salario-3000);
        cout << "R$ " << taxa << endl;
    }

    if(salario > 4500){
        taxa = 1000*0.08;
        taxa = taxa + 0.18*1500;
        taxa = taxa + (salario-4500)*0.28;
        cout << "R$ " << taxa << endl;
    }

}
