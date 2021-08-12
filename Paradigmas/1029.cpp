#include <iostream>
using namespace std;

int calls = 0;

int fib(int n) { 
  if (n <= 1) {
    calls++; 
	return n;
  }
  calls++; 
  return fib(n-1) + fib(n-2); 
} 

int main() {
    int n, x, result;
    cin >> n;
    //int resultados[n], chamadas[n], valores[n];  descomentar
    int resultados[1], chamadas[1], valores[1];  //comentar
    for(int i = 0; i < n; i++){
        cin >> x;
        result = fib(x);
        valores[i] = x;
        resultados[i] = result;
        chamadas[i] = calls - 1;
        calls = 0;
    }
    
    for(int i = 0; i < n; i++) 
        cout << "fib(" << valores[i] << ") = " << chamadas[i] << " calls = " << resultados[i] << endl;
    return 0;
}