#include <iostream>
using namespace std;

int main() {
    int i = 1, j = 7;
    while(i <= 9 && j >= 5) {
        cout << "I=" << i << " J=" << j << endl;
        j--;
        if(j < 5) {
            i += 2;
            j = 7;
        }
    }
    return 0;
}