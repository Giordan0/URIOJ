#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        int h = 0, c = 0;;
        for(int j = 0; j < s.size(); j++) {
            if(s[j] == 'a') c++;
            else if(s[j] == 'k') {
                h = c;
                c = 0;
            }
        }
        cout << "k";
        for(int j = 0; j < (h*c) ; j++)
            cout << "a";
        cout << endl;
    }
    return 0;
}