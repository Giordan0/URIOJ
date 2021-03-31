#include <iostream>
using namespace std;

int main() {
    int n, l;
    int c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l;
        if(l%2 == 0) c2++;
        if(l%3 == 0) c3++;
        if(l%4 == 0) c4++;
        if(l%5 == 0) c5++;
    }
    
    cout << c2 << " Multiplo(s) de 2" << endl;
    cout << c3 << " Multiplo(s) de 3" << endl;
    cout << c4 << " Multiplo(s) de 4" << endl;
    cout << c5 << " Multiplo(s) de 5" << endl;
    return 0;
}