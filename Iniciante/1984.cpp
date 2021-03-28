#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s == "") cout << 0 << endl;
    else {
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}