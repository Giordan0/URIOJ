#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    std::cout << std::fixed << std::setprecision(3);
    cout << (a/b) << " km/l" << endl;
    return 0;
}