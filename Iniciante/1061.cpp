#include <iostream>
using namespace std;

int main() {
    int di, hi, mi, si;
    int de, he, me, se;
    char d[4];
    
    cin.get(d, 4);
    cin >> di >> hi;
    cin.get(d, 3);
    cin >> mi;
    cin.get(d, 3);
    cin >> si;
    cin.getline(d, 0);
    cin.get(d, 4);
    cin >> de >> he;
    cin.get(d, 3);
    cin >> me;
    cin.get(d, 3);
    cin >> se;
    
    long dur;
    dur = (de*86400 + he * 3600 + me * 60 + se) - (di*86400 + hi * 3600 + mi * 60 + si);
    cout << dur/86400 << " dia(s)" << endl;
    cout << (dur%86400)/3600 << " hora(s)" << endl;
    cout << ((dur%86400)%3600)/60 << " minuto(s)" << endl;
    cout << ((dur%86400)%3600)%60 << " segundo(s)" << endl;
    return 0;
}