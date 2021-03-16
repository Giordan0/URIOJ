#include <iostream>
using namespace std;

int main() {
    int x, temp, temp2;
    cin >> x;
    cout << x << endl;
    temp = x%100;
    cout << (x - temp)/100 << " nota(s) de R$ 100,00"  << endl;
    
    temp2 = temp%50;
    cout << (temp - temp2)/50 << " nota(s) de R$ 50,00"  << endl;
    
    temp = temp2%20;
    cout << (temp2 - temp)/20 << " nota(s) de R$ 20,00"  << endl;
    
    temp2 = temp%10;
    cout << (temp - temp2)/10 << " nota(s) de R$ 10,00"  << endl;
    
    temp = temp2%5;
    cout << (temp2 - temp)/5 << " nota(s) de R$ 5,00"  << endl;
    
    temp2 = temp%2;
    cout << (temp - temp2)/2 << " nota(s) de R$ 2,00"  << endl;
    
    temp = temp2%1;
    cout << (temp2 - temp)/1 << " nota(s) de R$ 1,00"  << endl;
    return 0;
}