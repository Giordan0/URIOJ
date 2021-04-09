#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b;
    double c, d;
    cin >> a >> b >> c >> d;
    
    std::cout << std::fixed << std::setprecision(6);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
    
    std::cout << std::fixed << std::setprecision(1);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
    
    std::cout << std::fixed << std::setprecision(2);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
    
    std::cout << std::fixed << std::setprecision(3);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
    
    printf("A = %.3E, B = %.3E\n", a, b);
    printf("C = %.3E, D = %.3E\n", c, d);
    
    std::cout << std::fixed << std::setprecision(0);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
    return 0;
}