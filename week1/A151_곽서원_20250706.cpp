#include <algorithm>
#include <cmath>
#include <iostream>
#define MOD 10007
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int dp[501][501]={0,};
  int num[501][501]={0,};

    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
        cin>>num[i][j];
      }
    }
    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
        if(j==1){
          dp[i][j]=num[i][j]+dp[i-1][j];
        }
        dp[i][j]=num[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
      }
    }
      int max=0;
    for(int i=1; i<=n; i++){
      if(dp[n][i]>max) max=dp[n][i];      
    }
    
  cout<< max;
  return 0;
}
