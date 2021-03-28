#include <iostream>
using namespace std;

int main() {
    int p, n, c1, c2;
    cin >> p >> n >> c1;
    for(int i = 0; i < n; i ++) {
        cin >> c2;
        if(abs(c1 - c2) > p) {
            cout << "GAME OVER" << endl;;
            break;
        }
        else c1 = c2;
        if(i == n - 1) cout << "YOU WIN" << endl;
    }
    return 0;
}