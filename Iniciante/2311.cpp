#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    string s1;
    double gd, notas = 0, max = 0, min = 11, c = 0;
    cin >> n;
    std::cout << std::fixed << std::setprecision(2);
    for(int i = 0; i < n; i++) {
        c = 0, max = 0, min = 11;
        cin >> s1;
        cin >> gd;
        for(int j = 0; j < 7; j++) {
            cin >> notas;
            c += notas;
            if(max < notas) max = notas;
            if(min > notas) min = notas;
        }
        c = c - max - min;
        c *= gd;
        cout << s1 << " " << c << endl;
    }
    return 0;
}