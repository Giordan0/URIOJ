#include <iostream>
using namespace std;

int main() {
    int f[3], c[3], s = 0;
    for(int i = 0; i < 3; i++)
        cin >> f[i];
    for(int i = 0; i < 3; i++)
        cin >> c[i];
    for(int i = 0; i < 3; i++)
        if(c[i] > f[i])
        s += c[i] - f[i];
    cout << s << endl;
    return 0;
}