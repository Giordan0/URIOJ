#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    bool f = false;
    while(getline(cin, s)) {
        if(s.find("<body>") != string::npos) 
            f = true;
        
        if(s.find("</body>") != string::npos)
            f = false;
        
        if(f == true) {
            if(s.find("<body>") == string::npos)
                cout << s << endl;
        }
    }
    return 0;
}