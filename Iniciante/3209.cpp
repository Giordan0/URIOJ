#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> k;
        int s = 0, o;
        for(int j = 0; j < k; j++) {
            cin >> o;
            s += o;
        }
        cout << s - k + 1 << endl;
    }
    return 0;
}