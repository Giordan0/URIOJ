#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double s, t;
    string nome;
    cin >> nome >> s >> t;
    std::cout << std::fixed << std::setprecision(2);
    cout << "TOTAL = R$ " << (s + t * 0.15) << endl;
    return 0;
}