#include <iostream>
using namespace std;

int main() {
    int i = 1, j = 7, temp = 0, c = 0;
    temp = j;
    while(i <= 9 && j <= 15) {
        cout << "I=" << i << " J=" << j << endl;
        j--;
        c++;
        if(c == 3) {
            i += 2;
            j = temp + 2;
            temp = j;
            c = 0;
        }
    }
    return 0;
}