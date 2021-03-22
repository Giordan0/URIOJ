#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    std::cout << std::fixed << std::setprecision(1);
    for(int i = 0; i < n; i++) {
        if(y == 0) cout << "divisao impossivel" << endl;
        else cout << (x/(double) y) << endl;
        cin >> x >> y;
    }
    return 0;
}