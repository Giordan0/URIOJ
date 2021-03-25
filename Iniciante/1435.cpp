#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    while (n != 0) {
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++) {
                a = i;
                if(j < a) a = j;
                if(n - i + 1 < a) a = n - i + 1;
                if(n - j + 1 < a) a = n - j + 1;
                cout << setw(3) << a;
                if(j < n) cout << " ";
                else cout << endl;
            }
        cout << endl;
        cin >> n;
    }
    return 0;
}