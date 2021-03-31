#include <iostream>
using namespace std;

int main() {
    int p, j1, j2, r, a, f;
    cin >> p >> j1 >> j2 >> r >> a;
    if(p == 1) {
        if((j1 + j2)%2 == 0) {
            if(r == 1) {
                if(a == 1) f = 2;
                else f = 1;
            }
            
            else {
                if(a == 1) f = 1;
                else f = 1;
            }
        }
        
        else {
            if(r == 1) {
                if(a == 1) f = 2;
                else f = 1;
            }
            
            else {
                if(a == 1) f = 1;
                else f = 2;
            }
        }
    }
    else {
        if((j1 + j2)%2 != 0) {
            if(r == 1) {
                if(a == 1) f = 2;
                else f = 1;
            }
            
            else {
                if(a == 1) f = 1;
                else f = 1;
            }
        }
        
        else {
            if(r == 1) {
                if(a == 1) f = 2;
                else f = 1;
            }
            
            else {
                if(a == 1) f = 1;
                else f = 2;
            }
        }
    }
    
    if(f == 1) cout << "Jogador 1 ganha!" << endl;
    else cout << "Jogador 2 ganha!" << endl;
    return 0;
}