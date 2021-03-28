#include <iostream>
using namespace std;

int main() {
    int n, i = 0;
    int arab[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string roma[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    cin >> n;
    while(n) {
        if(n >= arab[i]) {
            cout << roma[i];
            n -= arab[i];
        }
        else i++;
    }
    cout<< endl;
    return 0;
}