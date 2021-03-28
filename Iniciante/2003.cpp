#include <iostream>
using namespace std;

int main() {
    int h, m, temp, atraso;
    char dp[2];
    while(cin >> h) {
        cin.get(dp, 2);
        cin >> m;
        temp = h * 100 + m;
        if(temp + 60 <= 760) atraso = 0;
        else {
            atraso = 60 - (760 - temp);
            if(h >= 9) atraso -= 80;
            else if(h >= 8) atraso -= 40;
        }
        cout << "Atraso maximo: " << atraso << endl;
    }
    return 0;
}