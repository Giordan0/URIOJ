#include <iostream>
using namespace std;

int main() {
    int n, f1 = 0, f2 = 0, f3 = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        if(i == n - 1) cout << f1 << endl;
        else cout << f1 << " ";
        f1 += f3;
        f3 = f2;
        f2 = f1;
    }
    return 0;
}