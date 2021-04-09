#include <iostream>
using namespace std;

int main() {
    int n, mov, mesa[3] = {0, 0, 0};
    char init;
    cin >> n >> init;
    if(init == 'A') mesa[0] = 1;
    else if(init == 'B') mesa[1] = 1;
    else if(init == 'C') mesa[2] = 1;
    for(int i = 0; i < n; i++) {
        cin >> mov;
        int temp;
        if(mov == 1) {
            temp = mesa[0];
            mesa[0] = mesa[1];
            mesa[1] = temp;
        }
        
        else if(mov == 2) {
            temp = mesa[1];
            mesa[1] = mesa[2];
            mesa[2] = temp;
        }
        
        else if(mov == 3) {
            temp = mesa[0];
            mesa[0] = mesa[2];
            mesa[2] = temp;
        }
    }
    
    for(int i = 0; i < 3; i++)
        if(mesa[i] == 1) cout << char(i + 65) << endl;
    return 0;
}