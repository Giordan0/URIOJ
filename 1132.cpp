#include <iostream>
using namespace std;

int main() {
    int x, y, s = 0;
    cin >> x >> y;
    if(x < y) {
        for (int i = x; i <= y; i++) 
            if(i%13 != 0) s += i;
    }
    
    else {
        for (int i = y; i <= x; i++)
            if(i%13 != 0) s += i;
    }
    cout << s << endl;
    return 0;
}