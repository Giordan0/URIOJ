#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f = n;
    for(int i = 1; i < n; i++) 
        f = f * i;
    cout << f << endl;
    return 0;
}