#include <iostream>
using namespace std;

int main() {
    int n, s, temp, c = 1;;
    while(cin >> n && n != 0) {
        for(int i = 1; i <= n; i++) {
            cin >> s;
            if(s == i) temp = s;
        }
        cout << "Teste " << c << endl;
        cout << temp << endl << endl;
        c++;
    }
    return 0;
}