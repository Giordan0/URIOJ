#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n;) {
        cout << i << " ";
        cout << i * i << " ";
        cout << i * i * i << endl;
        i++;
    }
    return 0;
}