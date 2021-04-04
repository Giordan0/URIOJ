#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double n1 = 234.345, n2 = 45.698;
    std::cout << std::fixed << std::setprecision(6);
    cout << n1 << " - " << n2 << endl;
    std::cout << std::fixed << std::setprecision(0);
    cout << n1 << " - " << n2 << endl;
    std::cout << std::fixed << std::setprecision(1);
    cout << n1 << " - " << n2 << endl;
    std::cout << std::fixed << std::setprecision(2);
    cout << n1 << " - " << n2 << endl;
    std::cout << std::fixed << std::setprecision(3);
    cout << n1 << " - " << n2 << endl;
    printf("%.6e - %.6e\n", n1, n2);
    printf("%.6E - %.6E\n", n1, n2);
    cout << n1 << " - " << n2 << endl;
    cout << n1 << " - " << n2 << endl;
    return 0;
}