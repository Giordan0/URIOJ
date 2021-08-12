#include <iostream>
using namespace std;

int main() {
    int n, l, s = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l;
        s += l;
    }
    cout << (s - n) << endl;
    return 0;
}