#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cp1, cp2, np1, np2;
    double v1, v2;
    cin >> cp1 >> np1 >> v1;
    cin >> cp2 >> np2 >> v2;
    std::cout << std::fixed << std::setprecision(2);
    cout << "VALOR A PAGAR: R$ " << (np1 * v1 + np2 * v2) << endl;
    return 0;
}