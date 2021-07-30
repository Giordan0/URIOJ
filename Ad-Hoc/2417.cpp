#include <iostream>
using namespace std;

int main() {
    int c[3], f[3];
    for(int i = 0; i < 3; i++)
        cin >> c[i];
    for(int i = 0; i < 3; i++)
        cin >> f[i];
    int tempc = 0, tempf = 0;
    tempc = (c[0] * 3) + c[1];
    tempf = (f[0] * 3) + f[1];
    
    if(tempc > tempf) cout << "C" << endl;
    else if(tempf > tempc) cout << "F" << endl;
    else {
        if(c[2] > f[2]) cout << "C" << endl;
        else if(f[2] > c[2]) cout << "F" << endl;
        else cout << "=" << endl;
    }
    return 0;
}