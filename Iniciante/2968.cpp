#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int v, n;
    cin >> v >> n;
    for(int i = 1; i <= 9; i++) {
        if(i == 9) cout << long (ceil(double(v*n) * (i*10)/100)) << endl;
        else cout << long (ceil(double(v*n) * (i*10)/100)) << " ";
    }
    return 0;
}