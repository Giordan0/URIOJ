#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a - b == 0 || a - c == 0 || b - c == 0) cout << "S" << endl;
    else if((a+b)-c == 0 || (b+c)-a == 0 || (a+c)-b == 0) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}