#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, x = -1, y = -1;
    int c = -1;
    std::cout << std::fixed << std::setprecision(2);
    while(c != 2) {
        while(x == -1 || y == -1) {
            cin >> n;
            if(n < 0 || n > 10) cout << "nota invalida" << endl;
            else {
                if(x == -1) x = n;
                else y = n;
            }
        }
        cout << "media = " << (x+y)/2 << endl;
        x = y = -1;
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
        } while (cin >> c && c != 2 && c != 1);
    }
    return 0;
}