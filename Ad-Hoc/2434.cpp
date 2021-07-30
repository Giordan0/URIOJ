#include <iostream>
using namespace std;

int main() {
    int n, s, m, min = 999999999;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        cin >> m;
        s += m;
        if(s < min) min = s;
    }
    cout << min << endl;
    return 0;
}