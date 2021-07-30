#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, a, b, temp;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        temp = b;
        int digits = 0; 
        while (temp != 0) { 
            temp /= 10;
            digits++;
        }
        int r = pow(10, digits);
        if(a < b) cout << "nao encaixa" << endl;
        else if((a - b)%r == 0) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
    return 0;
}