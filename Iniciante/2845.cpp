#include <iostream>
using namespace std;

int main() {
    int n, a, max = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a > max) max = a;
    }
    cout << max + 1 << endl;
    return 0;
}