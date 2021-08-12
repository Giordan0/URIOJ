#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int zona[50], n;
string input;
int dp[50][50];

int f(int a, int b){
   if(dp[a][b] != -1)   return dp[a][b];
   if(b - a <= 1) return dp[a][b] = 1;
   if(b - a == 2){
      if(zona[a] + zona[a + 1] + zona[b] >= 2)  return dp[a][b] = 0;
      else  return dp[a][b] = 1;
   }
   dp[a][b] = 0;
   for(int i = a + 1; i <= b; i += 3) {
      for(int j = i + 1; j <= b; j += 3) {
         if(zona[a] + zona[i] + zona[j] < 2)
            dp[a][b] += (f(a + 1, i - 1)*f(i + 1, j - 1)*f(j + 1, b));
      }
   }
   return dp[a][b];
}

int main(){
   int t;
   scanf("%d", &t);
   for(int c = 1; c <= t; ++c) {
      scanf("%d", &n);
      for(int i = 0; i < 50; ++i)
         for(int j = 0; j < 50; ++j)   dp[i][j] = -1;
      cin >> input;
      for(int i = 0; i < input.size(); ++i)  zona[i + 1] = (input[i] == 'R')?1:0;

      printf("Case %d: %d\n", c, f(1, n));
   }

   return 0;
}