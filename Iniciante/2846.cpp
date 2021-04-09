#include <iostream>
using namespace std;

int main() {
    int n, fib[100128], fibn[100128];
    cin >> n;
    fib[0] = 0, fib[1] = 1;
    for(int i = 2; i <= 100128; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    
    for(int i = 1, j = 2, k = 1; i <= 100128; i++) {
        if(fib[j] != i) fibn[k++] = i;
        else ++j;
    }
    cout << fibn[n] << endl;
    return 0;
}