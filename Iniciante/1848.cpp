#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, c = 0;
    string s;
    for(int i = 0; i < 3; i++) {
        n = 0;
        while(c == 0) {
            getline(cin, s);
            if(s.size() == 4) s.resize(3);
            if(s == "--*") n += 1;
            else if(s == "-*-") n += 2;
            else if(s == "-**") n += 3;
            else if(s == "*--") n += 4;
            else if(s == "*-*") n += 5;
            else if(s == "**-") n += 6;
            else if(s == "***") n += 7;
            else if(s == "---") n += 0;
            else c++;
        }
        cout << n << endl;
        c = 0;
    }
    return 0;
}