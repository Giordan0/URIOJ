#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    int s = 0;
    cin >> n;
    for(int j = 0; j < n; j++) {
        cin >> x >> y;
        for(int i = min(x, y) + 1; i < max(x, y); ++i)
            if(abs(i)%2 != 0) s += i;
        cout << s << endl;
        s = 0;
    }
    return 0;
}