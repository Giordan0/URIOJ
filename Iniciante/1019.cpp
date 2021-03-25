/*
Wrong Answer 60%

#include <iostream>
using namespace std;

int main() {
    int s;
    int h, m, seg;
    cin >> s;

    for(int i = 0; i <= s; i++) {
        seg++;
        if(i%60 == 0) {
            m++;
            seg = 0;
        }
        
        if(m == 60) {
            h++;
            m = 0;
        }
    }
    
    cout << h << ":" << (m - 1) << ":" << seg << endl;
    return 0;
}*/

#include <iostream>
using namespace std;

int main(){
    int s;
    cin >> s;
    cout << (s/3600) << ":" << (s%3600)/60 << ":" << (s%60) << endl;
    return 0;
}