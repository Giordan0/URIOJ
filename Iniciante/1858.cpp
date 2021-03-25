#include <iostream>
using namespace std;

int main() {
    int n, t, min, pos;
    cin >> n >> min;
    for(int i = 1; i < n; i++) {
        cin >> t;
        if(t < min) {
            min = t;
            pos = i;
        }
    }
    cout << pos + 1 << endl;
    return 0;
}