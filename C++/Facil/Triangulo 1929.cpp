#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    bool eTriangulo = false;

    //primeira combinacao

    if(A > abs(B-C) && A < B+A){
        if(B > abs(B-A) && B < B+A){
            if(C > abs(A-C) && C < A+C){
                eTriangulo = true;
            }
        }
    }

    //no lugar do B = C e no lugar do C = D
    //segunda combinacao
    if(A > abs(C-D) && A < C+A){
        if(C > abs(D-A) && C < D+A){
            if(D > abs(A-C) && D < A+C){
                eTriangulo = true;
            }
        }
    }

    //Terceira combinacao

    if(B > abs(C-D) && B < C+B){
        if(D > abs(C-B) && D < C+B){
            if(C > abs(B-C) && C < B+D){
                eTriangulo = true;
            }
        }
    }

    if(eTriangulo){
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

}
