#include <iostream>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        long long max = 0, c = 0;
        while(x > 0) {
            if(x%2 == 1) c++;
            else {
                if(c > max) max = c;
                c = 0;
            }
            x = x/2;
        }
        if(max > c) cout << max << endl;
        else cout << c << endl;
    }
    return 0;
}