#include <iostream>
#include <string>
using namespace std;

int main() {
    string l;
    getline(cin, l);
    if(l.size() > 140) cout << "MUTE" << endl;
    else cout << "TWEET" << endl;
    return 0;
}