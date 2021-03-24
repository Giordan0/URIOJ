#include <iostream>
using namespace std;

int main() {
    int n, a;
    while (cin >> n) {
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++) {
                if(i == j && i == n/2 + 1) a = 4;
                else if(i > n/3 && j > n/3 && i <= n - n/3 && j <= n - n/3) a = 1;
                else if(i == j) a = 2;
                else if(i + j == n + 1) a = 3;
                else a = 0;
                
                cout << a;
                if(j < n) cout << "";
                else cout << endl;
            }
        cout << endl;
    }
    return 0;
}