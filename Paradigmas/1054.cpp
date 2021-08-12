#include <iostream>
using namespace std;

int N;
int pos[200];
bool Pedrinhas[200];
bool pedraUsada[200];

int PiorDist() {
  int minDist = pos[0];
    for (int i = 0; i < N; ++i) {
      pedraUsada[i] = true;
      if (!Pedrinhas[i + 1]) 
        minDist = max(minDist, pos[i + 1] - pos[i]);
      else {
        minDist = max(minDist, pos[i + 2] - pos[i]);
        ++i;
      }
  }
    
  for (int i = N; i > 0; --i) {
    if (!pedraUsada[i - 1] || !Pedrinhas[i - 1])
      minDist = max(minDist, pos[i] - pos[i - 1]);
    else {
      minDist = max(minDist, pos[i] - pos[i - 2]);
      --i;
    }
  }
  return minDist;
}

int main() {
  int T;
  cin >> T;
    
  for (int t = 1; t <= T; ++t) {
    int D;
    cin >> N >> D;
    for (int i = 0; i < N; ++i) {
      char tipo, sep;
      cin >> tipo >> sep >> pos[i];
      Pedrinhas[i] = (tipo == 'S');
      pedraUsada[i] = false;
    }
        
    Pedrinhas[N] = false;
    pos[N] = D;
    pedraUsada[N] = false;
    cout << "Case " << t << ": " << PiorDist() << '\n';
  }
}