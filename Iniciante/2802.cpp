#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (long long) (pow(n, 4) - (6 * pow(n, 3)) + (23 * pow(n , 2)) - (18 * n) + 24)/24 << endl;
    return 0;
}