#include <iostream>
using namespace std;

int main() {
    int b, g;
    cin >> b >> g;
    if(g%2 != 0) g -= 1;
    g = g/2;
    if(b >= g) cout << "Amelia tem todas bolinhas!" << endl;
    else cout << "Faltam " << (g - b) << " bolinha(s)" << endl;
    return 0;
}