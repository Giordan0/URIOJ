#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double n, a, b;
    cin >> n;
    std::cout << std::fixed << std::setprecision(1);
    a = pow(((1 + sqrt(5))/2), n);
    b = pow(((1 - sqrt(5))/2), n);
    cout << (a - b)/sqrt(5) << endl;
    return 0;
}