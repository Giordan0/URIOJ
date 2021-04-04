#include <iostream>
using namespace std;

int main() {
    int h, e, a, o, w, x;
    cin >> h >> e >> a >> o >> w >> x;
    int bem = h + e + a + x + 1;
    int mal = o + w;
    
    if(bem > mal) cout << "Middle-earth is safe." << endl;
    else cout << "Sauron has returned." << endl;
    return 0;
}