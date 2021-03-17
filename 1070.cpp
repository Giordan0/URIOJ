#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%2 == 0) n++;
    for(int i = n, j = 0; j < 6; i += 2, j++) cout << i << endl;
    return 0;
}