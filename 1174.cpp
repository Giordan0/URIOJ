#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a[100];
    std::cout << std::fixed << std::setprecision(1);
    for(int i = 0; i < 100; i++) {
        cin >> a[i];
        if(a[i] <= 10)
            cout << "A[" << i << "] = " << a[i] << endl;
    }
    return 0;
}