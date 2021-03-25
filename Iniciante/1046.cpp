#include <iostream>
using namespace std;

int main() {
    int init, end;
    cin >> init >> end;
    if(init >= end)
        cout << "O JOGO DUROU " << 24 - init + end << " HORA(S)" << endl;
    else
        cout << "O JOGO DUROU " << abs(init - end) << " HORA(S)" << endl;
    return 0;
}