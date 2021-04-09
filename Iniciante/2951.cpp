#include <iostream>
using namespace std;

int main() {
    int n, g;
    int runa[101], v;
    char c;
    cin >> n >> g;
    for(int i = 0; i < n; i++) {
        cin >> c >> v;
        runa[c] = v;
    }
    
    int s = 0, x;
    cin >> x;
    for(int i = 0; i < x; i++) {
        cin >> c;
        s += runa[c];
    }
    
    cout << s << endl;
    if(s >= g) cout << "You shall pass!" << endl;
    else cout << "My precioooous" << endl;
    return 0;
}