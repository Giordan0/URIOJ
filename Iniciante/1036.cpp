#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta;
    cin >> a >> b >> c;
    std::cout << std::fixed << std::setprecision(5);
    
    if(a != 0) {
        delta = (b*b) - (4 * a * c);
        
        if(delta <= 0)
            cout << "Impossivel calcular" << endl;
        
        else {
            cout << "R1 = " << ((-b + sqrt(delta))/(2*a))  << endl;
            cout << "R2 = " << ((-b - sqrt(delta))/(2*a)) << endl;
        }
    }
    
    else 
        cout << "Impossivel calcular" << endl;
    return 0;
}