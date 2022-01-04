#include <iostream>

using namespace std;

int main(){
    int j = 60;
    int i = 1;

    while(j>=0){
        cout << "I=" << i << " " << "J=" << j << endl;
        j = j - 5;
        i = i + 3;
    }
}
