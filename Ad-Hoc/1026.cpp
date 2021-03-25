#include <iostream>
using namespace std;

typedef long long int64;

int main() {
    int64 n, m;
    while (cin >> n >> m)
        //porta xor
        cout << (n ^ m) << endl;
    return 0;
}