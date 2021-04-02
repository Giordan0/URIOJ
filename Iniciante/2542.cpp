#include <iostream>
using namespace std;

int main() {
    int n, m, l;
    int marcos[101][101], leo[101][101];
    int cm, cl, a;
    
    while(cin >> n) {
        cin >> m >> l;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> marcos[i][j];
            
        for(int i = 0; i < l; i++)
            for(int j = 0; j < n; j++)
                cin >> leo[i][j];
        
        cin >> cm >> cl >> a;
        if(marcos[cm-1][a-1] > leo[cl-1][a-1])
            cout << "Marcos" << endl;
        else if(marcos[cm-1][a-1] < leo[cl-1][a-1])
            cout << "Leonardo" << endl;
        else cout << "Empate" << endl;
    }
    return 0;
}