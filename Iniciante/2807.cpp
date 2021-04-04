#include <iostream>
using namespace std;

int main() {
    int n, sq[40];
    cin >> n;
    sq[0] = 1, sq[1] = 1;
    for(int i = 2; i < n; i++) 
        sq[i] = sq[i-2] + sq[i-1];
    
    for(int i = n - 1; i >= 0; i--) {
        if(i == 0) cout << sq[i] << endl;
        else cout << sq[i] << " ";
    }
    return 0;
}