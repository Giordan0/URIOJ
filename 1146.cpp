#include <iostream>
using namespace std;

int main() {
    int x, c = 0;
    cin >> x;
    while (x != 0) {
        for(int i = 1; i <= x;) {
            c++;
            if(c == x) {
                cout << i << endl;
                c = 0;
            }
            else cout << i << " ";
            i++;
        }
        cin >> x;
    }
    return 0;
}