#include <iostream>
using namespace std;

int main() {
    int n, map[101][101], cams = 0;
    cin >> n;
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= n; j++)
            cin >> map[i][j];
            
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cams = 0;
            if (map[i][j] == 1) cams++;
    	    if (map[i+1][j] == 1) cams++;
    	    if (map[i][j+1] == 1) cams++;
    	    if (map[i+1][j+1] == 1) cams++;
    	    if(cams > 1) cout << "S";
    	    else cout << "U";
        }
        cout << endl;
    }
    return 0;
}