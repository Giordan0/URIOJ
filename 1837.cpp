#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a >= 0) cout << (a/b) << " " << a%b << endl;
    else {
        int x = 0, y = 0, i;
        if(b < 0) x = b * -1;
        else x = b;
        
        for(i = 0; i < x; i++){
            y = a - i;
            if(y%b == 0) break;
        }
        cout << (y/b) << " " << i << endl;
    } 
    return 0;
}