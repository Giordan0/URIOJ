#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, h;
    double v;
    cin >> n >> h >> v;
    std::cout << std::fixed << std::setprecision(2);
    cout << "NUMBER = " << n << endl; 
    cout << "SALARY = U$ " << (h * v) << endl;
    return 0;
}