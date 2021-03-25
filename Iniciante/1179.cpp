#include <iostream>
using namespace std;

int main() {
    int par[5], impar[5], x, cp = 0, ci = 0;
    for(int i = 0; i < 15; i++) {
        cin >> x;
        if(x%2 == 0){
            par[cp] = x;
            cp++;
        }
        
        else {
            impar[ci] = x;
            ci++;
        }
        
        if(cp == 5) {
            for(int i = 0; i < 5; i++)
                cout << "par[" << i << "] = " << par[i] << endl;
            cp = 0;
        }
        
        if(ci == 5) {
            for(int i = 0; i < 5; i++)
                cout << "impar[" << i << "] = " << impar[i] << endl;
            ci = 0;
        }
    }
    for(int i = 0; i < ci; i++) 
        cout << "impar[" << i << "] = " << impar[i] << endl;
    for(int i = 0; i < cp; i++) 
        cout << "par[" << i << "] = " << par[i] << endl;
    return 0;
}