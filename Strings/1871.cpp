#include <iostream>
#include <string> 
using namespace std;

int main() {
    long long n, m;
    while(cin >> n >> m && n != 0 && m != 0) {
        string s = to_string(n + m);
        for(int i = 0; i < s.size(); i++) 
            if(s[i] != '0') cout << s[i];
        cout << endl;
    }
    return 0;
}