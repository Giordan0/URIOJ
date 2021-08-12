#include <iostream>
using namespace std;

int main() {
    int n, k, a, c = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a <= 0) c++;
    }
    if(c >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}