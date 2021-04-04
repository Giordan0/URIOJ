//Ambos funcionam
//Refatorei o primeiro por causa de um time limit exceeded
/*
#include <iostream>
using namespace std;

int main() {
    int l, c;
    cin >> l >> c;
    cout << l * c + (l - 1) * (c - 1) << endl;
    cout << (c - 1) * 2 + (l - 1) * 2 << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int l, c, t1, t2;
    cin >> l >> c;
    t1 = (l * c) + ((l - 1) * (c - 1));
    cout << t1 << endl;
    t2 = ((c - 1) * 2) + ((l - 1) * 2);
    cout << t2 << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int l, c, s = 0;
    cin >> l >> c;
    s = l * c;
    s += (l - 1) * (c - 1);
    cout << s << endl;
    s = 0;
    s += (l - 1) * 2;
    s += (c - 1) * 2;
    cout << s << endl;
    return 0;
}