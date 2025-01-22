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
  int dp[1001]={0};
  int num[1001];
  int result=0;
  
    for(int i=1; i<=n; i++){
      cin >> num[i];
      dp[i]=num[i];
      for(int j=i-1; j>=1; j--){
        if(num[i]>num[j])
        dp[i]=max(dp[i],dp[j]+num[i]);
      }
      result=max(dp[i],result);
    }
  cout<< result;
  return 0;
}
