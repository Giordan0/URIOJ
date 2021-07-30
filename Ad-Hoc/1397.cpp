#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    while(cin >> n && n != 0) {
        int j1 = 0, j2 = 0;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            if(a > b) j1++;
            else if(b > a) j2++;
        }
        cout << j1 << " " << j2 << endl;
    }
    return 0;
}