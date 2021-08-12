#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        bool f = false;
        if(s.size() < 20 || s[0] != 'R' || s[1] != 'A') cout << "INVALID DATA" << endl;
        else {
            for(int j = 2; j < s.size(); j++) {
                if(s[j] == '0' && f) cout << s[j];
                
                else if(s[j] != '0') {
                    cout << s[j];
                    f = true;
                }
            }
            if(f) cout << endl;
            else cout << "INVALID DATA" << endl;
        }
    }
    return 0;
}