#include <iostream>
using namespace std;

int main() {
    int n, d;
    while(cin >> n >> d) {
        string data;
        bool f = false;
        for(int i = 0; i < d; i++) {
            cin >> data;
            int p, c = 0;
            for(int j = 0; j < n; j++) {
                cin >> p;
                if(p == 1) c++;
                if(c == n && !f) {
                    f = true;
                    cout << data << endl;
                }
            }
            if(i == d - 1 && !f) cout << "Pizza antes de FdI" << endl;
        }
    }
    return 0;
}