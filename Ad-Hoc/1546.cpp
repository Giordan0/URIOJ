#include <iostream>
using namespace std;

int main() {
    int n, k, f;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> k;
        for(int j = 0; j < k; j++) {
            cin >> f;
            switch (f) {
                case 1:
                    cout << "Rolien" << endl;
                break;
                case 2:
                    cout << "Naej" << endl;
                break;
                case 3:
                    cout << "Elehcim" << endl;
                break;
                case 4:
                    cout << "Odranoel" << endl;
                break;
            }
        }
    }
    return 0;
}