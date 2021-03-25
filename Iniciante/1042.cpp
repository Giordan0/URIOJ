#include <iostream>
#include <array>
using namespace std;

int main() {
    std::array<int,3> a;
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    
    std::array<int,3> b = a;
    
    for(int i = 1; i < 3; i++) {
        int j = i;
        while(j > 0){
            if(a[j - 1] >= a[j]) {
                int temp;
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            j--;
        }
    }
    
    for(int i = 0; i < 3; i++)
        cout << a[i] << endl;
    
    cout << endl;
    
    for(int i = 0; i < 3; i++)
        cout << b[i] << endl;
        
    return 0;
}