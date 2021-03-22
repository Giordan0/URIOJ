#include <iostream>
using namespace std;

typedef long long int64;

int main() {
    int t, n;
    int64 f[61];
    cin >> t;
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 60; i++)
        f[i] = f[i - 2] + f[i -1];
    for(int i = 0; i < t; i++) {
        cin >> n;
        cout << "Fib(" << n << ") = " << f[n] << endl;
    }
    return 0;
}