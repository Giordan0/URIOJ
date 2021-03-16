#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, v;
    cin >> h >> v;
    std::cout << std::fixed << std::setprecision(3);
    cout << (h * v)/12.f << endl;
    return 0;
}