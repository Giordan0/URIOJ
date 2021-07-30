#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int i;
    if(k == 1) i = 1;
    else if(k <= 3) i = 3;
    else if(k <= 5) i = 5;
    else if(k <= 10) i = 10;
    else if(k <= 25) i = 25;
    else if(k <= 50) i = 50;
    else i = 100;
    cout << "Top " << i << endl;
    return 0;
}