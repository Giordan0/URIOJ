#include <iostream>
using namespace std;

int main() {
    double i = 0, j = 1;
    int c = 0;
    while(i <= 2) {
        c++;
        j = c + i;
        cout << "I=" << i << " J=" << j << endl;
        if(c >= 3) {
            i += 0.2;
            c = 0;
        }
    }
    return 0;
}