#include <iostream>
using namespace std;

int main() {
    int n, v, temp, c = 1, max = 0;
    cin >> n;
    cin >> v;
    temp = v;
    for(int i = 1; i < n; i++) {
        cin >> v;
        if(v == temp) {
            c++;
            if(c > max) max = c;
        }
        else c = 1;
        temp = v;
    }
    cout << max << endl;
    return 0;
}