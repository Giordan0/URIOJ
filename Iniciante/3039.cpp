#include <iostream>
using namespace std;

int main() {
    int n, c = 0, b = 0;
    cin >> n;
    string nome, g;
    for(int i = 0; i < n; i++) {
        cin >> nome >> g;
        if(g == "F") b++;
        else if(g == "M") c++;
    }
    
    cout << c << " carrinhos" << endl;
    cout << b << " bonecas" << endl;
    return 0;
}