#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n <= 10) cout << 7 << endl;
    else if(n <= 30) 
        cout << (n - 10) + 7 << endl;
    else if(n <= 100) 
        cout << (n - 30) * 2 + 27 << endl;
    else 
        cout << (n - 100) * 5 + 167 << endl;
    return 0;
}