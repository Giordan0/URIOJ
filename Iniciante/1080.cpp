#include <iostream>
using namespace std;

int main() {
    int n, max = 0, c = 0;
    for(int i = 1; i <= 100; ++i) {
        cin >> n;
        if(n >= max){
            c = i;
            max = n;
        }
    }
    cout << max << endl;
    cout << c << endl;
    return 0;
}