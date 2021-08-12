#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        int c = 1;
        char s;
        for(int i = 0; i < n; i++) {
            cin >> s;
            if(s == 'D') {
                c++;
                if(c > 4) c = 1;
            }
            else {
                c--;
                if(c == 0) c = 4;
            }
        }
        if(c == 1)
            cout<< "N" << endl;
        if(c == 2)
            cout<< "L" << endl;
        if(c == 3)
            cout<< "S" << endl;
        if(c == 4)
            cout<< "O" << endl;
    }
    return 0;
}