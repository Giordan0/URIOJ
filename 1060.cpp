#include <iostream>
using namespace std;

int main() {
    int c;
    double a[6];
    
    for(int i = 0; i < 6; i++) {
        cin >> a[i];
        if(a[i] > 0)
            c++;
    }
    cout << c << " valores positivos" << endl;
    return 0;
}