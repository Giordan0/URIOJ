#include <iostream>
using namespace std;

int main() {
    int x, z, s = 0;
    cin >> x >> z;
    while (z <= x)
        cin >> z;
    for(int i = 0, j = x; i < z; j++) {
        i += j;
        s++;
    }
    cout << s << endl;
    return 0;
}