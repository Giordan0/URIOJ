#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        double t, d, temp = 0;
        for(int i = 0; i < n; i++) {
            cin >> t >> d;
            if(d/t > temp) {
                temp = d/t;
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}