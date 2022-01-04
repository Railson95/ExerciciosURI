#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int numero = 0, i = 0;
    float media;
    int soma = 0;


    while(1){
        cin >> numero;
        if(numero > 0){
            i++;
            soma = soma + numero;
        } else {
            break;
        }
    }

    media = soma*1.0 / i;

    cout << fixed << setprecision(2);

    cout << media << endl;
}
