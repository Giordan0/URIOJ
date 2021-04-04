#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    std::cout << std::fixed << std::setprecision(2);
    cout << (double) x/(n + 2) << endl;
    return 0;
}