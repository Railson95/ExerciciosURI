#include <iostream>

using namespace std;

int main(){
    double n = 3.14159, raio, area;

    cin >> raio;

    area = n * (raio * raio);

    cout << fixed;

    cout.precision(4);

    cout << "A=" << area << endl;

    return 0;
}
