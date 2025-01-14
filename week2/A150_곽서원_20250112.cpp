#include <algorithm>
#include <cmath>
#include <iostream>
#define MOD 1000000000
using namespace std;

int Max(int A, int B) {
  if (A > B)
    return A;
  return B;
}

int main() {
  ios::sync_with_stdio(false); 
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  int dp[n+1];
  int a[n+1];
   a[0]=0;
  dp[0] = 0; 
  int max=-1001;
    for(int i=1; i<=n; i++){
      cin>>a[i];
      dp[i]=Max(a[i],a[i]+dp[i-1]);
      if(max<dp[i]) max=dp[i];
    }
 
  cout<< max;
  return 0;
}
