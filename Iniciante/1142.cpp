#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    
    for(int i = 1; i <= (n * 4); i++) {
        cout << i << " ";
        c++;
        if(c == 3) {
            cout << "PUM" << endl;
            i++;
            c = 0;
        }
    }
    return 0;
}