#include <iostream>
using namespace std;

int main() {
    int x, y;
    int s = 0;
    cin >> x >> y;
    for(int i = min(x, y) + 1; i < max(x, y); ++i)
        if(abs(i)%2 != 0) s += i;
    cout << s << endl;
    return 0;
}