#include <iostream>
using namespace std;

int main() {
    int n, x[1000005], z[1000005];
    long long est = 0, car = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> x[i];
        z[i] = 0;
    }
    
    int j = 0;
    while(1) {
        if(j == 0 && x[j]%2 == 0) {
            z[j] = 1;
            if(x[j] > 0) x[j]--;
            break;
        }
        
        else if(j == (n - 1) && x[j]%2 != 0) {
            z[j] = 1;
            if(x[j] > 0) x[j]--;
            break;
        }
        
        else if(x[j]%2 != 0) {
            if(x[j] > 0) x[j]--;
            z[j] = 1;
            j++;
        }
        
        else if(x[j]%2 == 0) {
            z[j] = 1;
            if(x[j] > 0) x[j]--;
            j--;
        }
    }
    
    for(int i = 0; i < n; i++) {
        car += x[i];
        est += z[i];
    }
    cout << est << " " << car << endl;
    return 0;
}