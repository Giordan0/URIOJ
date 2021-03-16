#include <iostream>
using namespace std;

int main() {
    double x;
    int calc, temp, temp2, temp3;
    cin >> x;
    calc = x;
    x = 100*x;
    temp3 = x;
    
    cout << "NOTAS:\n";
    temp = calc%100;
    cout << (calc - temp)/100 << " nota(s) de R$ 100.00"  << endl;
    
    temp2 = temp%50;
    cout << (temp - temp2)/50 << " nota(s) de R$ 50.00"  << endl;
    
    temp = temp2%20;
    cout << (temp2 - temp)/20 << " nota(s) de R$ 20.00"  << endl;
    
    temp2 = temp%10;
    cout << (temp - temp2)/10 << " nota(s) de R$ 10.00"  << endl;
    
    temp = temp2%5;
    cout << (temp2 - temp)/5 << " nota(s) de R$ 5.00"  << endl;
    
    temp2 = temp%2;
    cout << (temp - temp2)/2 << " nota(s) de R$ 2.00"  << endl;
    
    temp = temp2%1;
    cout << "MOEDAS:" << endl;
    cout << (temp2 - temp)/1 << " moeda(s) de R$ 1.00"  << endl;
    temp3 = temp3%100;
    
    cout << temp3/50 << " moeda(s) de R$ 0.50"  << endl;
    temp3 = temp3%50;
    
    cout << temp3/25 << " moeda(s) de R$ 0.25"  << endl;
    temp3 = temp3%25;
    
    cout << temp3/10 << " moeda(s) de R$ 0.10"  << endl;
    temp3 = temp3%10;

    cout << temp3/5 << " moeda(s) de R$ 0.05"  << endl;
    temp3 = temp3%5;

    cout << temp3/1 << " moeda(s) de R$ 0.01"  << endl;
    return 0;
}