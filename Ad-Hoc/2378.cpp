#include <iostream>
using namespace std;

int main() {
    int n, c, s, e, qtd = 0;
    bool f = false;
    cin >> n >> c;
    for(int i = 0; i < n; i++) {
        cin >> s >> e;
        qtd += e - s;
        if(qtd > c) f = true;
    }
    if(f) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}