#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double raio;
    cin >> raio;
    std::cout << std::fixed << std::setprecision(4);
    cout << "A=" << (3.14159 * (raio*raio)) << endl; 
    return 0;
}