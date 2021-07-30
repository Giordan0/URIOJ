#include <iostream>
using namespace std;

unsigned long long fatorial(unsigned long long n){
    unsigned long long fat = 1;
    while (n > 1)
        fat *= n--;
    return fat;
}

int main() {
    unsigned long long m, n;
    while(cin >> m >> n) 
        cout << fatorial(m) + fatorial(n) << endl;
    return 0;
}