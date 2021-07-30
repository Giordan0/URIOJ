#include <iostream>
using namespace std;

int main() {
    int t, n, p;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        cin >> n;
        int temp;
        for(int j = 0; j < n; j++) {
            cin >> p;
            if(j == (n-1)/2) temp = p;
        }
        cout << "Case " << i << ": " << temp << endl;
    }
    return 0;
}