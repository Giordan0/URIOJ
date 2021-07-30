#include <iostream>
using namespace std;

int main() {
    int n, r;
    while(cin >> n && n) {
        int x = 0, y = 0;
        for(int i = 0; i < n; i++) {
            cin >> r;
            if(r == 0) x++;
            else y++;
        }
        cout << "Mary won " << x << " times and John won " << y << " times" << endl;
    }
    return 0;
}