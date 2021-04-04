#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    std::cout << std::fixed << std::setprecision(2);
    cout << (double) n/(x+y) << endl;
    return 0;
}