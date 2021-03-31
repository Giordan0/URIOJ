#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double v, d, r;
    std::cout << std::fixed << std::setprecision(2);
    while(cin >> v) {
        cin >> d;
        r = d/2;
        cout << "ALTURA = " << v/(3.14 * (r * r)) << endl;
        cout << "AREA = " << 3.14 * (r * r) << endl;
    }
    return 0;
}