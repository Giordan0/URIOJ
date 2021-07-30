#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    string s;
    while(cin >> n && n != 0) {
        int min = 999999;
        string smin;
        for(int i = 0; i < n; i++) {
            cin >> s >> x >> y;
            if(min > (x - y)) {
                min = x - y;
                smin = s;
            }
        }
        cout << smin << endl;
    }
    return 0;
}