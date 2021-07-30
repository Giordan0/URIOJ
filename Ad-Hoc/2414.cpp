#include <iostream>
using namespace std;

int main() {
    int n, max = 0;
    while(cin >> n && n) 
        if(n > max) max = n;
    cout << max << endl;
    return 0;
}