#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string str;
    double n, c = 0, s = 0;
    std::cout << std::fixed << std::setprecision(1);
    while(getline(cin, str)) {
        cin >> n;
        getline(cin, str);
        s += n;
        c++;
    }
    cout << (s/c) << endl;
    return 0;
}