#include <iostream>
using namespace std;

int main() {
    int n, m, mmax;
    double nota, max = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m >> nota;
        if(nota > max) {
            max = nota;
            mmax = m;
        }
    }
    if (max < 8) cout << "Minimum note not reached" << endl;
    else cout << mmax << endl;
    return 0;
}