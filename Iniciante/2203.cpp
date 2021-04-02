#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double xf, yf, xi, yi, vi, r1, r2;
    while(cin >> xf) {
        cin >> yf >> xi >> yi >> vi >> r1 >> r2;
        double dist = 0.0;
        dist = sqrt(pow(xf - xi, 2) + pow(yf - yi, 2));
        dist += vi * 1.5;
        int range = r1 + r2;
        if(dist > range) cout << "N" << endl;
        else cout << "Y" << endl;
    }
    return 0;
}