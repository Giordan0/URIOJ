#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    std::cout << std::fixed << std::setprecision(4);
    cout << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) << endl;
    return 0;
}