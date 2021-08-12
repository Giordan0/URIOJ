#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == ' ') cout << s[i];
        else if(s[i] == 'p' && s[i - 1] == 'p') { 
            cout << s[i];
            i++;
        }
        else if(s[i] != 'p') cout << s[i];
    }
    cout << endl;
    return 0;
}