#include <iostream>
using namespace std;

int main() {
    int n, c, verba = 0, gasto = 0;
    char t;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t >> c;
        if(t == 'G') gasto += c;
        else verba += c;
    }
    
    if(verba >= gasto) cout << "A greve vai parar." << endl;
    else cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    return 0;
}