#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> joias;
    string joia;
    while(cin >> joia)
        joias.insert(joia);
    cout << joias.size() << endl;
    return 0;
}