#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n && n != -1) {
        int s = 0, c = 0, p;
        for(int i = 0; i < n; i++) {
            cin >> p;
            s += p;
            if(s%100 == 0) c++;
        }
        cout << c << endl;
    }
    return 0;
}