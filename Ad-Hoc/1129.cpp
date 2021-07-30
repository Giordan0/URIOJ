#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, d, e;
    while(cin >> n && n) {
        char f;
        for(int i = 0; i < n; i++) {
            int cont = 0;
            cin >> a >> b >> c >> d >> e;
            if(a <= 127) f = 'A', cont++;
            if(b <= 127) f = 'B', cont++;
            if(c <= 127) f = 'C', cont++;
            if(d <= 127) f = 'D', cont++;
            if(e <= 127) f = 'E', cont++;
            if(cont != 1) cout << "*" << endl;
            else cout << f << endl;
        }
    }
    return 0;
}