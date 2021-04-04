#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 39; i++)
        cout << "-";
    cout << endl;
    
    for(int i = 0; i < 39; i++) {
        if(i == 0 || i == 12 || i == 22 ||i == 38) cout << "|";
        else if(i == 3) {
            cout << "decimal";
            i += 6;
        }
        else if(i == 15) {
            cout << "octal";
            i += 4;
        }
        else if(i == 25) {
            cout << "Hexadecimal";
            i += 10;
        }
        else cout << " ";
    }
    cout << endl;
    
    for(int i = 0; i < 39; i++)
        cout << "-";
    cout << endl;
    
    for(int j = 0; j < 16; j++) {
        for(int i = 0; i < 39; i++) {
            if(i == 0 || i == 12 || i == 22 ||i == 38) cout << "|";
            
            //Decimal
            else if(i == 7) {
                if(j < 10) cout << j;
            }
            else if(i == 6 && j >= 10) {
                cout << j;
            }
            
            //Octal
            else if(i == 18) {
                if(j < 8) cout << j << " ";
            }
            else if(i == 16) {
                if(j >= 8) cout << j + 2;
            }
            
            //Hex
            else if(i == 30) {
                if(j < 10) cout << j;
                else cout << char(j + 55);
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