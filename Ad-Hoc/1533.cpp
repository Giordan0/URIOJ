#include <iostream>
using namespace std;

int main() {
    int n, v[1000];
    while(cin >> n && n) {
        int sus, temp = 0, max = 0;
        for(int i = 0; i < n; i ++) {
            cin >> v[i];
            if(v[i] > max) max = v[i];
        }
        
        for(int i = 0; i < n; i ++) {
            if(v[i] > temp && v[i] != max) {
                temp = v[i];
                sus = i + 1;
            }
        }
        cout << sus << endl;
    }
    return 0;
}