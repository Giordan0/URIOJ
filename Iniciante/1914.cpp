#include <iostream>
using namespace std;

int main() {
    int qt, n[2];
    string s1[2], s2[2];
    cin >> qt;
    for(int i = 0; i < qt; i++) {
        cin >> s1[0] >> s1[1];
        cin >> s2[0] >> s2[1];
        cin >> n[0] >> n[1];
        if((n[0] + n[1])%2 == 0) {
            if(s1[1] == "PAR") cout << s1[0] << endl;
            else cout << s2[0] << endl;
        }
        else {
            if(s1[1] == "IMPAR") cout << s1[0] << endl;
            else cout << s2[0] << endl;
        }
    }
    return 0;
}