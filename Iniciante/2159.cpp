#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    std::cout << std::fixed << std::setprecision(1);
    cout << n/log(n) << " " << 1.25506 * (n/log(n)) << endl;
    return 0;
}