#include <iostream>
using namespace std;

int main() {
    int r, l;
    cin >> r >> l;
    double vol = (4*3.1415*r*r*r)/3;
    cout << int (l/vol) << endl;
    return 0;
}