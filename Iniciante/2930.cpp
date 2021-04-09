#include <iostream>
using namespace std;

int main() {
    int e, d;
    cin >> e >> d;
    if(e <= d - 3) cout << "Muito bem! Apresenta antes do Natal!" << endl;
    else if(e > d) cout << "Eu odeio a professora!" << endl;
    else {
        cout << "Parece o trabalho do meu filho!" << endl;
        if(e + 2 < 24) cout << "TCC Apresentado!" << endl;
        else cout << "Fail! Entao eh nataaaaal!" << endl;
    }
    return 0;
}