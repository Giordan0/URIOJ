#include <iostream>
using namespace std;

int main() {
    int n, v[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    string m;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        int c = 0;
        for(int j = 0; j < m.size(); j++) 
            c += v[m[j] - 48];
        cout << c << " leds" << endl;
    }
    return 0;
}