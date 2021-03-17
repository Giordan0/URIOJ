#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double a, b, c;
    std::cout << std::fixed << std::setprecision(1);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        cout << (a*2 + b*3 + c*5)/10 << endl;
    }
    return 0;
}