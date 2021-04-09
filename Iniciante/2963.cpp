#include <iostream>
using namespace std;

int main() {
    int n, voto, carlos, max = 0;
    cin >> n >> carlos;
    for(int i = 0; i < n; i++) {
        cin >> voto;
        if(voto > max) max = voto;
    }
    if(carlos >= max) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}