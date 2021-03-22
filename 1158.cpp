#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    int s = 0;
    cin >> n;
    for(int j = 0; j < n; j++) {
        cin >> x >> y;
        for(int i = x, c = 0; c < y; ++i)
            if(i%2 != 0) {
                c++;
                s += i;
            }
        cout << s << endl;
        s = 0;
    }
    return 0;
}