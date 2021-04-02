#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n, c;
    std::cout << std::fixed << std::setprecision(4);
    while(cin >> m) {
        double s1 = 0, s2 = 0;
        for(int i = 0; i < m; i++) {
            cin >> n >> c;
            s1 += n * c;
            s2 += c;
        }
        s2 *= 100;
        cout << s1/s2 << endl;
    }
    return 0;
}