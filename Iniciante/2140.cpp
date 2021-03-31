#include <iostream>
using namespace std;

int main() {
    int n, m;
    int notas[] = {2, 5, 10, 20, 50, 100};
    cin >> n >> m;
    while(n != 0 || m != 0) {
        int troco = m - n;
        bool f = false;
        for(int i = 0; i < sizeof(notas)/sizeof(*notas); i++) {
            for(int j = 0; j < sizeof(notas)/sizeof(*notas); j++)
                if(troco - notas[j] == notas[i]) f = true;
        }
        if(f) cout << "possible" << endl;
        else cout << "impossible" << endl;
        cin >> n >> m;
    }
    return 0;
}