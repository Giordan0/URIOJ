#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, x;
    cin >> n;
    for(long long i = 0; i < n; i++) {
        cin >> x;
        bool primalidade = false;
        for(long long j = 2; j <= sqrt(x); ++j) {
            if(x%j == 0) {
                primalidade = true;
                break;
            }
        }
        if(!primalidade) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    return 0;
}