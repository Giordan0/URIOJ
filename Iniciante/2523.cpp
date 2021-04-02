#include <iostream>
using namespace std;

int main() {
    int n, l;
    string msg;
    while(cin >> msg) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> l;
            cout << msg[l-1];
        }
        cout << endl;
    }
    return 0;
}