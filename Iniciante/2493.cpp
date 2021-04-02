#include <iostream>
using namespace std;

int main() {
    int t, x[51], y[51], z[51], e[51];
    string nome[51];
    char op[51], equal;
    while(cin >> t) {
        string erro[51];
        int c = 0;
        for(int i = 0; i < t; i++)
            cin >> x[i] >> y[i] >> equal >> z[i];
        
        for(int i = 0; i < t; i++) 
            cin >> nome[i] >> e[i] >> op[i];
        
        for(int i = 0; i < t; i++) {
            switch(op[i]) {
                case '+':
                if(x[e[i]-1] + y[e[i]-1] != z[e[i]-1]) {
                    erro[c] = nome[i];
                    c++;
                } 
                break;
                case '-':
                if(x[e[i]-1] - y[e[i]-1] != z[e[i]-1]) {
                    erro[c] = nome[i];
                    c++;
                }
                break;
                case '*':
                if(x[e[i]-1] * y[e[i]-1] != z[e[i]-1]) {
                    erro[c] = nome[i];
                    c++;
                }
                break;
                case 'I':
                if(x[e[i]-1] + y[e[i]-1] == z[e[i]-1] || x[e[i]-1] - y[e[i]-1] == z[e[i]-1] || x[e[i]-1] * y[e[i]-1] == z[e[i]-1]) {
                    erro[c] = nome[i];
                    c++;
                }
                break;
            }
        }
        
        string temp;
        for (int i = 0; i <= c; i++) {
            for (int j = 0; j < c - i - 1; j++) {
                if (erro[j] > erro[j + 1]) {
                    temp = erro[j];
                    erro[j] = erro[j + 1];
                    erro[j + 1] = temp;
                }
            }
        }

        if(c == t)
            cout << "None Shall Pass!" << endl;
        
        else if(c == 0) 
            cout << "You Shall All Pass!" << endl;
        
        else {
            for(int i = 0; i < c; i++) {
                if(i == c - 1) cout << erro[i] << endl;
                else cout << erro[i] << " ";
            }
        }
    }
    return 0;
}