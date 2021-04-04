#include <iostream>
using namespace std;

int main() {
    string col;
    while(cin >> col) {
        int s = 0;
        if(col.size() == 1) s = (col[0] - 64);
        else if(col.size() == 2) 
            s = ((26 * (col[0] - 64))  + (col[1] - 64));
        else
            s = ((676 * (col[0] - 64)) + (26 * (col[1] - 64)) + (col[2] - 64));
        if(s > 16384 || col.size() > 3)
            cout << "Essa coluna nao existe Tobias!" << endl;
        else cout << s << endl;
    }
    return 0;
}