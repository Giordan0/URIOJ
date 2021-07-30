#include <iostream>
using namespace std;

int main() {
    int n, l, c, s = 0;;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l >> c;
        if(l > c) s += c;
    }
    cout << s << endl;
    return 0;
}