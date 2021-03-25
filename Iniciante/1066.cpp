#include <iostream>
using namespace std;

int main() {
    int a[5];
    int pa = 0, im = 0, pos = 0, neg = 0;
    
    for(int i = 0; i < 5; ++i) {
        cin >> a[i];
        if(a[i]%2 == 0) 
            pa++;
        else 
           im++;
        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
    }
    cout << pa << " valor(es) par(es)" << endl;
    cout << im << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
    return 0;
}