#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n, h, c, l;
    std::cout << std::fixed << std::setprecision(4);
    while(cin >> n) {
        cin >> h >> c >> l;
        double hip = sqrt((h*h) + (c*c));
        cout << ((hip * n) * l)/10000 << endl;
    }
    return 0;
}