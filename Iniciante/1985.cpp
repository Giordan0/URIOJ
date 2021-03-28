#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, q, c;
    double s = 0;
    cin >> n;
    std::cout << std::fixed << std::setprecision(2);
    for(int i = 0; i < n; i++) {
        cin >> c >> q;
        switch(c) {
            case 1001:
            s += q * 1.5;
            break;
            case 1002:
            s += q * 2.5;
            break;
            case 1003:
            s += q * 3.5;
            break;
            case 1004:
            s += q * 4.5;
            break;
            case 1005:
            s += q * 5.5;
            break;
        }
    }
    cout << s << endl;
    return 0;
}