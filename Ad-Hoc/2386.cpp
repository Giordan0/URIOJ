#include <iostream>
using namespace std;

int main() {
    int a, n, e, c = 0;
    cin >> a >> n;
    for(int i = 0; i < n; i++) {
        cin >> e;
        if(e * a >= 40000000) c++;
    }
    cout << c << endl;
    return 0;
}