#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int c, q;
    cin >> c >> q;
    std::cout << std::fixed << std::setprecision(2);

    switch(c) {
        case 1:
            cout << "Total: R$ " << (q * 4.00) << endl;
            break;
        
        case 2:
            cout << "Total: R$ " << (q * 4.5)<< endl;
            break;
            
        case 3:
            cout << "Total: R$ " << (q * 5.00) << endl;
            break;
            
        case 4:
            cout << "Total: R$ " << (q * 2.00) << endl;
            break;
        
        case 5:
            cout << "Total: R$ " << (q * 1.5) << endl;
            break;
    }
    return 0;
}