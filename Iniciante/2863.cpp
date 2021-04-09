#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    std::cout << std::fixed << std::setprecision(2);
    while(cin >> t) {
        double min = 111, n;
        for(int i = 0; i < t; i++) {
            cin >> n;
            if(n < min) min = n;
        }
        cout << min << endl;
    }
    return 0;
}