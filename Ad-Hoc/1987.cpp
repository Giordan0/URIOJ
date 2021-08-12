#include <iostream>
using namespace std;

int main() {
    int n;
    string m;
    while(cin >> n >> m) {
        int c = 0;
        for(int i = 0; i < n; i++)
            c += m[i] - 48;
        if(c%3 == 0) cout << c << " sim" << endl;
        else cout << c << " nao" << endl;
    }
    return 0;
}