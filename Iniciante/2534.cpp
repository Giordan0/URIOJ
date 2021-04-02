#include <iostream>
using namespace std;

int main() {
    int n, q, a[101], b[101];
    while(cin >> n >> q) {
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        for(int i = 0; i < q; i++) 
            cin >> b[i];
        
        int temp;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] < a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        for(int i = 0; i < q; i++)
            cout << a[b[i] - 1] << endl;
    }
    return 0;
}