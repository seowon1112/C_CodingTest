#include <algorithm>
#include <cmath>
#include <iostream>
#define MOD 9901
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  long long dp[n+1];
  dp[0]=0;
  dp[1]=3;
  dp[2]=7;
    for(int i=3; i<=n; i++){
      dp[i]=(dp[i-1]*2+dp[i-2])%MOD;
    }
    cout<<dp[n];
  return 0;
}
