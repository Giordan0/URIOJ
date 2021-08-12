#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    cout << ceil(y/(y-x)) << endl;
    return 0;
}