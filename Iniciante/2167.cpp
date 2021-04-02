#include <iostream>
using namespace std;

int main() {
    int n, h[101], f = 0;
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> h[i];
    if(n > 1) {
        for(int i = 0; i < n; i++) {
            if(h[i] < h[i-1]) {
                f = i + 1;
                break;
            }
            
            else f = 0;
        }
    }
    else 
        if(h[0] > h[1]) f = 1;
    
    cout << f << endl;
    return 0;
}