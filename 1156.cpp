#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double s = 0;
    std::cout << std::fixed << std::setprecision(2);
    for(double i = 1, j = 1; i <= 39; i+= 2, j *= 2)
        s += (i/j);
    cout << s << endl;
    return 0;
}