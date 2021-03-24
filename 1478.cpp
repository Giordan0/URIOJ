#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    while (n != 0) {
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++) {
                if(i == j) a = 1;
                else a = abs(i - j) + 1;
                cout << setw(3) << a;
                if(j < n) cout << " ";
                else cout << endl;
            }
        cout << endl;
        cin >> n;
    }
    return 0;
}