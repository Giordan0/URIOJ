#include <iostream>
using namespace std;

int main() {
    int n, m, map[101][101];
    int ax, ay, px, py;
    while(cin >> n >> m) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> map[i][j];
                if(map[i][j] == 1) ax = i, ay = j;
                if(map[i][j] == 2) px = i, py = j;
            }
        }
        cout << abs(py - ay) + abs(px - ax) << endl;
    }
    return 0;
}