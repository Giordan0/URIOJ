#include <iostream>
using namespace std;

int main() {
    int n, m, tab[101][101];
    while(cin >> n >> m) {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> tab[i][j];
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(tab[i][j] == 1) cout << 9;
                else {
                    int p = 0;
                    if(i > 0 && tab[i - 1][j] == 1) p++;
                    if(i < n - 1 && tab[i + 1][j] == 1) p++;
                    if(j > 0 && tab[i][j - 1] == 1) p++;
                    if(j < m - 1 && tab[i][j + 1] == 1) p++;
                    cout << p;
                }
            }
            cout << endl;
        } 
    }
    return 0;
}