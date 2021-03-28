#include <iostream>
using namespace std;

int main() {
    int v, i = 0;
    char n[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char h[10];
    cin >> v;
    while(v) {
        h[i++] = n[v%16];
        v /= 16;
    }
    while(i--) cout << h[i];
    cout << endl;
    return 0;
}