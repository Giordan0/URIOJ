#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    std::cout << std::fixed << std::setprecision(0);
    while(a != 0) {
        cout << floor(sqrt((a*b*100)/(double)c)) << endl;
        cin >> a >> b >> c;
    }
    return 0;
}