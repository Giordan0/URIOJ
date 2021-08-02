#include <iostream>
using namespace std;

int main() {
    string n;
    bool f = false;
    cin >> n;
    for(int i = 1; i < n.size(); i++) {
        if(n[i] == '3' && n[i-1] == '1') f = true;
    }
    if(f) cout << n << " es de Mala Suerte" << endl;
    else cout << n << " NO es de Mala Suerte" << endl;
    return 0;
}