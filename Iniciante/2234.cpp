#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, p;
    cin >> h >> p;
    std::cout << std::fixed << std::setprecision(2);
    cout << (double) h/p << endl;
    return 0;
}