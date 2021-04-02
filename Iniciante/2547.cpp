#include <iostream>
using namespace std;

int main() {
    int n, min, max;
    while(cin >> n >> min >> max) {
        int a, c = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a >= min && a <= max) c++;
        }
        cout << c << endl;
    }
    return 0;
}