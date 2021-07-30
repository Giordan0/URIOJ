#include <iostream>
using namespace std;

int main() {
    int n, m, x, c = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        bool f = true;
        for(int j = 0; j < m; j++) {
            cin >> x;
            if(x == 0) f = false;
        }
        if(f) c++;
    }
    cout << c << endl;
    return 0;
}