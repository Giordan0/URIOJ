#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    std::cout << std::fixed << std::setprecision(2);
    cout << ((b-a)/a) * 100 << "%" << endl;
    return 0;
}