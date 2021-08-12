#include <iostream>
using namespace std;

int main() {
    int n, s, a = 0, r = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        a += s;
        r += s%3;
    }
    cout << (a - r) << endl;
    return 0;
}