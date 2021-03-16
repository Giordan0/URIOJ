#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n;
    cin >> n;
    std::cout << std::fixed << std::setprecision(3);
    cout << "VOLUME = " << (4.0/3) * 3.14159 * (n * n * n) << endl;
    return 0;
}