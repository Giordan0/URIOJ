#include <iostream>
using namespace std;

int main() {
    int n, x, min, minj = 0;
    cin >> n >> min;
    for(int i = 1; i < n; i++){
        cin >> x;
        if(x < min) {
            min = x;
            minj = i;
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << minj << endl;
    return 0;
}