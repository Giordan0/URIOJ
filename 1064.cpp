#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a[6];
    double s = 0, c = 0;
    
    for(int i = 0; i < 6; ++i) {
        cin >> a[i];
        if(a[i] >= 0) {
            s += a[i];
            c++;
        }
    }
    std::cout << std::fixed << std::setprecision(0);
    cout << c << " valores positivos" << endl;
    std::cout << std::fixed << std::setprecision(1);
    cout << (s/c) << endl;
    return 0;
}