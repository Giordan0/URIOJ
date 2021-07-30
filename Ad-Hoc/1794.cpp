#include <iostream>
using namespace std;

int main() {
    int n, la, lb, sa, sb;
    cin >> n >> la >> lb >> sa >> sb;
    if(la <= n && lb >= n) {
        if(sa <= n && sb >= n) 
            cout << "possivel" << endl;
        else
            cout << "impossivel" << endl;
    }
    else cout << "impossivel" << endl;
    return 0;
}