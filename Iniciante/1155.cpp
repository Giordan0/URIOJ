#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double s = 0;
    std::cout << std::fixed << std::setprecision(2);
    for(double i = 1; i <= 100; i++)
        s += (1/i);
    cout << s << endl;
    return 0;
}