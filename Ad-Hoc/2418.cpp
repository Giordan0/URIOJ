#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, s = 0, max = 0, min = 11;
    cout << fixed << setprecision(1);
    for(int i = 0; i < 5; i++) {
        cin >> n;
        s += n;
        if(n > max) max = n;
        if(n < min) min = n;
    }
    
    cout << (s - max - min) << endl;
    return 0;
}