#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int c;
    string s;
    cin >> c;
    std::cout << std::fixed << std::setprecision(2);
    for(int i = 0; i < c; i++) {
        cin >> s;
        cout << 0.01 * s.size() << endl;
    }
    return 0;
}