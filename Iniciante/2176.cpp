#include <iostream>
#include <string>
using namespace std;

int main() {
    int c = 0;
    string l;
    getline(cin, l);
    for(int i = 0; i < l.size(); i++) 
        if(l[i] == '1') c++;
    if(l == "") cout << "00" << endl;
    else if(c%2 == 0) cout << l << "0" << endl;
    else cout << l << "1" << endl;
    return 0;
}