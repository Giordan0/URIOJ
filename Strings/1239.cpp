#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        bool fi = false, fb = false;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '_' && s[i] != '*') cout << s[i];
            else if(s[i] == '_' && !fi) {
                cout << "<i>";
                fi = true;
            }
            else if(s[i] == '_' && fi) {
                cout << "</i>";
                fi = false;
            }
            
            else if(s[i] == '*' && !fb) {
                cout << "<b>";
                fb = true;
            }
            else {
                cout << "</b>";
                fb = false;
            }
        }
        cout << endl;
    }
    return 0;
}
