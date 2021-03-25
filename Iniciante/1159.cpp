#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    while(n != 0) {
        for(int i = n, j = 0; j < 5; ++i)
            if(i%2 == 0) {
                j++;
                s += i;
            }
        cout << s << endl;
        s = 0;
        cin >> n;
    }
    return 0;
}