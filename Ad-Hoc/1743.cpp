#include <iostream>
using namespace std;

int main() {
    int x[5], y[5];
    bool f = true;
    for(int i = 0; i < 5; i++)
        cin >> x[i];
    for(int i = 0; i < 5; i++) {
        cin >> y[i];
        if(x[i] == y[i]) f = false;
    }
    if(f) cout << "Y" << endl;
    else cout << "N" << endl;
    return 0;
}