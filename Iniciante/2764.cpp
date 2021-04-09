#include <iostream>
#include <string>
using namespace std;

int main() {
    string d;
    cin >> d;
    string dd, mm, yy;
    dd += d[0], dd += d[1];
    mm += d[3], mm += d[4];
    yy += d[6], yy += d[7];

    cout << mm << "/" << dd << "/" << yy << endl;
    cout << yy << "/" << mm << "/" << dd << endl;
    cout << dd << "-" << mm << "-" << yy << endl;
    return 0;
}