#include <iostream>
using namespace std;

int main() {
    int xe, ye, m;
    while(cin >> xe) {
        cin >> ye >> m;
        int xc, yc;
        for(int i = 0; i < m; i++) {
            cin >> xc >> yc;
            if(xc <= xe && yc <= ye) cout << "Sim" << endl;
            else if(xc <= ye && yc <= xe) cout << "Sim" << endl;
            else if(xc == ye && yc == xe) cout << "Sim" << endl;
            else cout << "Nao" << endl;
        }
    }
    return 0;
}