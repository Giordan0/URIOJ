#include <iostream>
using namespace std;

int main() {
    int n, h[101], f = 0;
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> h[i];
    if(n > 2) {
        for(int i = 2; i < n; i++) {
            if(h[i] >= h[i-1] && h[i-1] >= h[i-2]) {
                f = 0;
                break;
            }
            
            else if(h[i] <= h[i-1] && h[i-1] <= h[i-2]) {
                f = 0;
                break;
            }
            
            else f = 1;
        }
    }
    
    else {
        if(h[0] != h[1]) f = 1;
    }
    cout << f << endl;
    return 0;
}