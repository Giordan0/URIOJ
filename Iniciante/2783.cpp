#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> album;
    int n, c, m, x[51], y, z = 0;
    cin >> n >> c >> m;
    for(int i = 0; i < c; i++) 
        cin >> x[i];
    for(int i = 0; i < m; i++) {
        cin >> y;
        album.insert(y);
    }
    
    for(int i = 0; i < c; i++) {
        if(album.count(x[i]) != 0) z++;
    }
    cout << c - z << endl;
    return 0;
}