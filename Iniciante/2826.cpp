#include <iostream>
using namespace std;

int main() {
    string a, b;
    bool f = false;
    cin >> a >> b;
    if(a[0] < b[0]) {
        cout << a << endl;
        cout << b << endl;
    }
    
    else if(a[0] > b[0]) {
        cout << b << endl;
        cout << a << endl;
    }
    
    else {
        int temp = min(a.size(), b.size());
        for(int i = 1; i < temp; i++) {
            if(a[i] < b[i]) {
                cout << a << endl;
                cout << b << endl;
                break;
            }
            
            else if(a[i] > b[i]) {
                cout << b << endl;
                cout << a << endl;
                break;
            }
            
            if(i == temp - 1) f = true;
        }
        
        if(f) {
            if(a.size() < b.size()) {
                cout << a << endl;
                cout << b << endl;
            }
            
            else if(a.size() > b.size()) {
                cout << b << endl;
                cout << a << endl;
            }
            
            else {
                cout << a << endl;
                cout << b << endl;
            }
        }
    }
    return 0;
}