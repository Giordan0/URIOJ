#include <iostream>
using namespace std;

int main() {
   int n, m, s = 0;
   cin >> n >> m;
   while(n > 0 && m > 0) {
       if(n > m) {
          for(int i = m; i <= n; i++) {
              s += i;
              cout << i << " ";
            }
          cout << "Sum=" << s << endl;
          s = 0;
       }
       
       else {
           for(int i = n; i <= m; i++) {
              s += i;
              cout << i << " ";
            }
          cout << "Sum=" << s << endl;
          s = 0; 
       }
    cin >> n >> m;
   }
   return 0;
}