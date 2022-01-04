#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T, N;
    vector<int> x;
    vector<int>::iterator k;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        x.push_back(N);
    }

    for(k = x.begin(); k != x.end(); k++){
        if(*k % 2 == 0){
            cout << "1" << endl;
        } else {
            cout << "9" << endl;
        }
    }
}
