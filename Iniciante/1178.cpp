#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n[100], x;
    std::cout << std::fixed << std::setprecision(4);
    cin >> x;
    n[0] = x;
    cout << "N[" << 0 << "] = " << n[0] << endl;
    for(int i = 1; i < 100; i++) {
        n[i] = n[i-1]/2;
        cout << "N[" << i << "] = " << n[i] << endl;
    }
    return 0;
}