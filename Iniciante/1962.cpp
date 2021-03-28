#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        if(t < 2015) cout << 2015 - t << " D.C." << endl;
        else cout << t - 2015 + 1 << " A.C." << endl;
    }
    return 0;
}