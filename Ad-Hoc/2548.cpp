#include <iostream>
using namespace std;

int main() {
    int n, m, v[1001];
    while(cin >> n >> m) {
        int maxp = 0;
        for(int i = 0; i < n; i++) 
            cin >> v[i];
        for(int i = 1; i <= m; i++) 
            maxp += v[n-i];
        cout << maxp << endl;
    }
    return 0;
}