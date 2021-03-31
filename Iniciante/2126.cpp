#include <iostream>
using namespace std;

int main() {
    int caso = 1, p = 0, c = 0, f = 0;;
    string n1, n2;
    while(cin >> n1) {
        cin >> n2;
        c = 0;
        cout << "Caso #" << caso << ":" << endl;
        for(int i = 0; i < n2.size(); i++) {
            if(n1[0] == n2[i]) {
                f = 0;
                for(int j = 0; j < n1.size(); j++) {
                    if(i+j >= n2.size()) break;
                    if(n1[j] == n2[i+j]) f++;
                }
                
                if(f == n1.size()) {
                    c++;
                    p = i + 1;
                }
            }
        }
        
        if(c == 0) cout << "Nao existe subsequencia" << endl;
        else {
            cout << "Qtd.Subsequencias: " << c << endl;
            cout << "Pos: " << p << endl;
        }
        
        cout << endl;
        caso++;
    }
    return 0;
}