#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double r = 0.0;
    cin >> n;
    std::cout << std::fixed << std::setprecision(10);
    for(int i = 0; i < n; i++) {
        r += 2.0;
        r = 1.0/r;
    }
    r += 1.0;
    cout << r << endl;
    return 0;
}