#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    std::cout << std::fixed << std::setprecision(0);
    while(cin >> a >> b >> c && (a + b + c) != 0) {
        cout << floor(cbrt(a * b * c)) << endl;
    }
    return 0;
}