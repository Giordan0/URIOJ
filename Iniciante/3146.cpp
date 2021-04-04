#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;
    std::cout << std::fixed << std::setprecision(2);
    cout << (3.14 * r) * 2 << endl;
    return 0;
}