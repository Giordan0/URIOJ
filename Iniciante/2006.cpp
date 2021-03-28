#include <iostream>
using namespace std;

int main() {
    int t, r, s = 0;
    cin >> t;
    for(int i = 0; i < 5; i++) {
        cin >> r;
        if(r == t) s++;
    }
    cout << s << endl;
    return 0;
}