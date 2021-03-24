#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b) {
        if(b > c || b == c) cout << ":(" << endl;
        else if(b < c && (b - a) > (c - b)) cout << ":(" << endl;
        else if(b < c && (b - a) <= (c - b)) cout << ":)" << endl;
    }
    else if(a > b) {
        if(b < c || b == c) cout << ":)" << endl;
        else if(b > c && (a - b) > (b - c)) cout << ":)" << endl;
        else if(b > c && (a - b) <= (b - c)) cout << ":(" << endl;
    }
    else {
        if (b < c) cout << ":)" << endl;
        else cout << ":(" << endl;
    }
    return 0;
}