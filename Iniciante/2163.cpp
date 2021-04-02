#include <iostream>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m;
    int a[1001][1001];
    
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) 
            cin >> a[i][j];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 42) {
                if(a[i-1][j-1] == 7 && a[i-1][j] == 7 && a[i-1][j+1] == 7 && a[i][j-1] == 7 && a[i][j+1] == 7 && a[i+1][j-1] == 7 && a[i+1][j] == 7 && a[i+1][j+1] == 7) {
                    x = i + 1;
                    y = j + 1;
                }
            }
        }
    }   
    cout << x << " " << y << endl;
    return 0;
}