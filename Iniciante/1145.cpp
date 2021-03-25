#include <iostream>
using namespace std;

int main() {
    int x, y, c = 0;
    cin >> x >> y;
    for(int i = 1; i <= y;) {
        c++;
        if(c == x) {
            cout << i << endl;
            c = 0;
        }
        else cout << i << " ";
        i++;
    }
    return 0;
}