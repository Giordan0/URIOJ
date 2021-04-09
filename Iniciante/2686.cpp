#include <iostream>
using namespace std;

int main() {
    double m;
    while(cin >> m) {
        if(m == 360) m = 0;
        if(m < 90) cout << "Bom Dia!!" << endl;
        else if(m < 180) cout << "Boa Tarde!!" << endl;
        else if(m < 270) cout << "Boa Noite!!" << endl;
        else if(m < 360) cout << "De Madrugada!!" << endl;
        
        int h, min, sec;
        h = ((int)(m * 240)/3600)%60;
        min = ((int)(m * 240)/60)%60;
        sec = (int)(m * 240)%60;
        
        h = (h + 6)%24;
        

        if(h < 10) {
            if(min < 10) {
                if(sec < 10) 
                    cout << "0" << h << ":" << "0" << min << ":" << "0" << sec << endl;
                
                else cout << "0" << h << ":" << "0" << min << ":" << sec << endl;
            }
            
            else {
                if(sec < 10) 
                    cout << "0" << h << ":" << min << ":" << "0" << sec << endl;
                
                else cout << "0" << h << ":" << min << ":" << sec << endl;
            }
        }
        
        else {
            if(min < 10) {
                if(sec < 10) 
                    cout  << h << ":" << "0" << min << ":" << "0" << sec << endl;
                
                else cout << h << ":" << "0" << min << ":" << sec << endl;
            }
            
            else {
                if(sec < 10) 
                    cout << h << ":" << min << ":" << "0" << sec << endl;
                
                else cout << h << ":" << min << ":" << sec << endl;
            }
        }
    }
    return 0;
}