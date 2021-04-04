#include <iostream>
using namespace std;

int main() {
    int t, jipe = 0, turista = 0;
    string s;
    cin >> s;
    while(s != "ABEND") {
        cin >> t;
        if(s == "SALIDA") {
            turista += t;
            jipe++;
        }
        else if(s == "VUELTA") {
            turista -= t;
            jipe--;
        }
        cin >> s;
    }
    cout << turista << endl;
    cout << jipe << endl;
    return 0;
}