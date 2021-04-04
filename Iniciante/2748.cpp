#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 39; i++)
        cout << "-";
    cout << endl;
    
    for(int j = 0; j < 5; j++) {
        for(int i = 0; i < 39; i++) {
            if(i == 0 || i == 38) cout << "|";
            else if(i == 9 && j == 0) {
                cout << "Roberto";
                i += 6;
            }
            else if(i == 9 && j == 2) {
                cout << "5786";
                i += 3;
            }
            else if(i == 9 && j == 4) {
                cout << "UNIFEI";
                i += 5;
            }
            else cout << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < 39; i++)
        cout << "-";
    cout << endl;
    return 0;
}