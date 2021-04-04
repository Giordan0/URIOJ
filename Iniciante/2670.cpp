#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) 
        cin >> a[i];
    int f1, f2, f3;
    f1 = 0 * a[0] + 2 * a[1] + 4 * a[2];
    f2 = 2 * a[0] + 0 * a[1] + 2 * a[2];
    f3 = 4 * a[0] + 2 * a[1] + 0 * a[2];
    
    cout << min(f1, min(f2, f3)) << endl;
    return 0;
}