#include <iostream>
using namespace std;

int main() {
    int init, end, minit, mend;
    int a, b;
    cin >> init >> minit >> end >> mend;
    a = init*60 + minit;
    b = end*60 + mend;
    if(init >= end){
        if(minit >= mend)
            cout << "O JOGO DUROU " << (((24*60 - a) + b) - ((24*60 - a) + b)%60)/60 << " HORA(S) E " << ((24*60 - a) + b)%60 << " MINUTO(S)" << endl;
        else
            cout << "O JOGO DUROU " << abs(init - end) << " HORA(S) E " << ((24*60 - a) + b)%60 << " MINUTO(S)" << endl;
    }
        
    else{
        if(minit >= mend)
            cout << "O JOGO DUROU " << ((b - a) - (b - a)%60)/60 << " HORA(S) E "<< (b - a)%60  << " MINUTO(S)" << endl;
        else
            cout << "O JOGO DUROU " << abs(init - end) << " HORA(S) E "<< (b - a)%60  << " MINUTO(S)" << endl;
    }
        
    return 0;
}