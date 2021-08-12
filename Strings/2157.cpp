#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, b, e;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> b >> e;
        for(int j = b; j <= e; j++)
            cout << j;
        for(int j = e; j >= b; j--) {
            string s = to_string(j);
            for(int k = s.size(); k > 0; k--)
                cout << s[k-1];
        }
        cout << endl;
    }
    return 0;
}