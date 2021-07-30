#include <iostream>
using namespace std;

int main() {
    int n, p;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> p;
        cout << "resposta " << i << ": " << p << endl;
    }
    return 0;
}