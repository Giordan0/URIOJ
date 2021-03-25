#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    std::cout << std::fixed << std::setprecision(1);
    cin >> a >> b >> c;
    if(a < b + c && b < c + a && c < a + b)
        cout << "Perimetro = " << (a + b + c) << endl;
    
    else
        cout << "Area = " << ((a + b) * c)/2 << endl;
    return 0;
}