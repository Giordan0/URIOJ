#include <iostream>
using namespace std;

int main() {
    string s;
    int n, f;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s >> f;
        if(s == "Thor") cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}