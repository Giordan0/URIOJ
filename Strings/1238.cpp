#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s1, s2;
    for(int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        int a = s1.size();
        int b = s2.size();
        if(a > b) {
            for(int j = 0; j < b; j++)
                cout << s1[j] << s2[j];
            for(int j = b; j < a; j++)
                cout << s1[j];
            cout << endl;
        }
        
        else if(b > a) {
            for(int j = 0; j < a; j++)
                cout << s1[j] << s2[j];
            for(int j = a; j < b; j++) 
                cout << s2[j];
            cout << endl;
        }
        
        else {
            for(int j = 0; j < b; j++)
                cout << s1[j] << s2[j];
            cout << endl;
        }
    }
    return 0;
}