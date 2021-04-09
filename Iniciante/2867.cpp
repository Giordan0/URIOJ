#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int c, n, m;
    cin >> c;
    for(int i = 0; i < c; i++) {
        cin >> n >> m;
        cout << (int) (log10(n) * m) + 1 << endl;
    }
    return 0;
}