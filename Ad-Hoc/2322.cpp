#include <iostream>
using namespace std;

int main() {
    int n, p, s = 0;
    cin >> n;
    for(int i = 0; i < n - 1; i++) {
        cin >> p;
        s += p;
    }
    int e = (n + 1) * n/2;
    cout << (e - s) << endl;
    return 0;
}