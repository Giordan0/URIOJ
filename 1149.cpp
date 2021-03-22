#include <iostream>
using namespace std;

int main() {
    int a, n, s = 0;
    cin >> a >> n;
    while (n <= 0)
        cin >> n;
    for(int i = a, j = 0; j < n; i++, j++)
        s += i;
    cout << s << endl;
    return 0;
}