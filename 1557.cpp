#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n, arr[16][16], x, y;
    string s;
    cin >> n;
    while (n != 0) {
        y = 1;
        x = 1;
        for(int i = 1; i <= n; i++) {
            y = x;
            for(int j = 1; j <= n; j++) {
                arr[i][j] = y;
                y *= 2;
            }
            x *= 2;
        }
        
        s = to_string(arr[n][n]);
        
        for(int i = 1; i <= n; i++) 
            for(int j = 1; j <= n; j++) {
                cout << setw(s.size()) << arr[i][j];
                if(j < n) cout << " ";
                else cout << endl;
            }
        cout << endl;
        cin >> n;
    }
    return 0;
}