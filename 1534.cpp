#include <iostream>
using namespace std;

int main() {
    int n, a;
    while (cin >> n) {
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++) {
                if(i + j == n + 1) a = 2;
                else if(i == j) a = 1;
                else a = 3;
                cout << a;
                if(j == n) cout << endl;
            }
    }
    return 0;
}