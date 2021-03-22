#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, c = 0;
    double s = 0;
    std::cout << std::fixed << std::setprecision(2);
    cin >> n;
    while(n > 0) {
        s += n;
        c++;
        cin >> n;
    }
    cout << s/c << endl;
    return 0;
}