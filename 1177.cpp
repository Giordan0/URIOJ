#include <iostream>
using namespace std;

int main() {
    int n[1000], t, c = 0;
    cin >> t;
    for(int i = 0; i < 1000; i++) {
        n[i] = c;
        c++;
        if(c == t) c = 0;
        cout << "N[" << i << "] = " << n[i] << endl;
    }
    return 0;
}