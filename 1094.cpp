#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, c = 0, r = 0, s = 0, t = 0, temp;
    string cobaia;
    double percent;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        cin >> cobaia;
        t += temp;
        if(cobaia == "C") c += temp;
        else if(cobaia == "R") r += temp;
        else s += temp;
    }
    std::cout << std::fixed << std::setprecision(0);
    cout << "Total: " << t << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: "<< r << endl;
    cout << "Total de sapos: "<< s << endl;
    std::cout << std::fixed << std::setprecision(2);
    percent = (c*100)/t;
    cout << "Percentual de coelhos: " << percent << " %" << endl;
    percent = (r*100)/t;
    cout << "Percentual de ratos: " << percent << " %" << endl;
    percent = (s*100)/t;
    cout << "Percentual de sapos: " << percent << " %" << endl;
    return 0;
}