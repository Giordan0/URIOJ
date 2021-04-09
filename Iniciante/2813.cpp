#include <iostream>
using namespace std;

int main() {
    int n, c = 0, e = 0, fc = 0, fe = 0;
    string sd, sn;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> sd >> sn;
        if(sd == "chuva") {
            if(fc == 0) {
                c++;
                fe++;
            }
            
            else {
                fc--;
                fe++;
            }
        }
        
        if(sn == "chuva") {
           if(fe == 0) {
                e++;
                fc++;
            }
            
            else {
                fc++;
                fe--;
            } 
        }
    }
    cout << c << " " << e << endl;
    return 0;
}