#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double s;
    cin >> s;
    std::cout << std::fixed << std::setprecision(2);
    
    if(s <= 400){
        cout << "Novo salario: " << (s + s*0.15) <<endl;
        cout << "Reajuste ganho: " << (s*0.15) << endl;
        cout << "Em percentual: 15 %" << endl;
    }
        
    else if(s > 400 && s <= 800){
        cout << "Novo salario: " << (s + s*0.12) <<endl;
        cout << "Reajuste ganho: " << (s*0.12) << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    
    else if(s > 800 && s <= 1200){
        cout << "Novo salario: " << (s + s*0.1) <<endl;
        cout << "Reajuste ganho: " << (s*0.1) << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    
    else if(s > 1200 && s <= 2000){
        cout << "Novo salario: " << (s + s*0.07) <<endl;
        cout << "Reajuste ganho: " << (s*0.07) << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    
    else{
        cout << "Novo salario: " << (s + s*0.04) <<endl;
        cout << "Reajuste ganho: " << (s*0.04) << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}