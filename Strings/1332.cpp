#include <iostream>
using namespace std;

int main() {
    int n;
    string s, v = "one";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        int tam = s.size();
        if(tam == 3) {
            int f = 0;
            for(int j = 0; j < tam; j++) {
                if(s[j] == v[j]) f++;
            }
            if(f >= 2) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else 
            cout << 3 << endl;
    }
    return 0;
}