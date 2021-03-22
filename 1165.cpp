#include <iostream>
using namespace std;

int main() {
    int n, x;
    bool prim = false;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        for(int j = 2; j <= x/2; j ++)
            if(x%j == 0) {
                prim = true;
                break;
            }
        if(!prim) cout << x << " eh primo" << endl;
        else cout << x << " nao eh primo" << endl;
        prim = false;
    }
    return 0;
}