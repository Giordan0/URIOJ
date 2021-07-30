#include <iostream>
using namespace std;

int main() {
    int n, p, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p;
        if(p == 1) c++;
    }
    cout << c << endl;
    return 0;
}