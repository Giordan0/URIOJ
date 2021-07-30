#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double c, n, p[1001];
    std::cout << std::fixed << std::setprecision(3);
    cin >> c;
    for(int i = 0; i < c; i++) {
        cin >> n;
        double media = 0;
        for(int j = 0; j < n; j++) {
            cin >> p[j];
            media += p[j];
        }
        media /= n;
        double cont = 0;
        for(int j = 0; j < n; j++) {
            if(p[j] > media) cont++;
        }
        cout << (cont/n) * 100 << "%" << endl;
    }
    return 0;
}