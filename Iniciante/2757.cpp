#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    
    cout << "A = ";
    std::cout << std::setfill(' ') << std::setw(10) << a << ", B = ";
    std::cout << std::setfill(' ') << std::setw(10) << b << ", C = ";
    std::cout << std::setfill(' ') << std::setw(10) << c << endl;
    
    cout << "A = ";
    std::cout << std::setfill('0') << std::internal << std::setw(10) << a << ", B = ";
    std::cout << std::setfill('0') << std::setw(10) << b << ", C = ";
    std::cout << std::setfill('0') << std::setw(10) << c << endl;
    
    cout << "A = ";
    std::cout << std::setfill(' ') << left << std::setw(10) << a << ", B = ";
    std::cout << std::setfill(' ') << std::setw(10) << b << ", C = ";
    std::cout << std::setfill(' ') << std::setw(10) << c << endl;
    
    return 0;
}