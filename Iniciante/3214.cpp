#include <iostream>
using namespace std;

int main() {
    int e, f, c, refri = 0, g;
    cin >> e >> f >> c;
    g = e + f;
    while(g >= c) {
        refri += g/c;
        g = g/c + g%c;
    }
    cout << refri << endl;
    return 0;
}