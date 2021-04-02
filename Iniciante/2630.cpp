#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, r, g, b;
    cin >> t;
    string c;
    for(int i = 0; i < t; i++) {
        cin >> c;
        cin >> r >> g >> b;
        if(c == "min") 
            cout << "Caso #" << i+1 << ": " << min(r, min(g,b)) << endl;
        
        else if(c == "max") 
            cout << "Caso #" << i+1 << ": " << max(r, max(g,b)) << endl;
        
        else if(c == "mean") 
            cout << "Caso #" << i+1 << ": " << (r+g+b)/3 << endl;
        
        else if(c == "eye") 
            cout << "Caso #" << i+1 << ": " <<  int (0.3 * r + 0.59 * g + 0.11 * b) << endl;
    }
    return 0;
}