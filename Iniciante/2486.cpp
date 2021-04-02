#include <iostream>
#include <string>
//Esse include aqui, os 2 acima pode remover
//#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string food;
    while(cin >> t && t) {
        long long consumo = 0;
        for(int i = 0; i < t; i++) {
            cin >> n;
            cin.ignore();
            getline(cin, food);
            if(food == "suco de laranja") consumo += 120 * n;
            else if(food == "morango fresco") consumo += 85 * n;
            else if(food == "mamao") consumo += 85 * n;
            else if(food == "goiaba vermelha") consumo += 70 * n;
            else if(food == "manga") consumo += 56 * n;
            else if(food == "laranja") consumo += 50 * n;
            else if(food == "brocolis") consumo += 34 * n;
        }
        
        if(consumo > 130) cout << "Menos " << consumo - 130 << " mg" << endl;
        else if(consumo < 110) cout << "Mais " << 110 - consumo << " mg" << endl;
        else cout << consumo << " mg" << endl;
    }
    return 0;
}