#include <iostream>
using namespace std;

int main() {
    int c[5];
    for(int i = 0; i < 5; i++)
        cin >> c[i];
    int s = 0;
    s += c[0] * 300;
    s += c[1] * 1500;
    s += c[2] * 600;
    s += c[3] * 1000;
    s += c[4] * 150;
    cout << (s + 225) << endl;
    return 0;
}