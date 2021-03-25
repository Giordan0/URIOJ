#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int col; 
    double m[12][12], s = 0;
    char c;
    std::cout << std::fixed << std::setprecision(1);
    cin >> col >> c;
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++) {
            cin >> m[i][j];
            if(j == col) s += m[i][j];
        }   
    if(c == 'S') cout << s << endl;
    else cout << s/12 << endl; 
    return 0;
}