#include <iostream>
using namespace std;

int main() {
    int n, j = 1, x;
    while(cin >> n) {
        x = 1;
        for(int i = 1; i <= n; i++) 
            x += i;
        if(x == 1)
            cout << "Caso " << j << ": " << x << " numero" << endl;
        else 
            cout << "Caso " << j << ": " << x << " numeros" << endl;
        
        for(int i = 0; i <= n; i++) {
            if(i == 0) {
                if(n > 0) cout << "0 ";
                else cout << "0";
            }
            
            for(int j = 0; j < i; j++) {
                if(i == n && j == n - 1) cout << i;
                else cout << i << " ";
            }
        }
        cout << endl;
        cout << endl;
        j++;
    }
    return 0;
}