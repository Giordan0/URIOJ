#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    a /= 2;
    b /= 3;
    c /= 5;
    int bolos = min(a, min(b, c));
    cout << bolos << endl;
    return 0;
}