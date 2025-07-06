#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  int m;
  int DP[1000000];
  DP[1]=1;
  DP[2]=2;
  DP[3]=4;
  DP[4]=7;
  for(int j=5; j<11; j++){
    DP[j]=DP[j-3]+DP[j-2]+DP[j-1];
  }
    for(int i=0; i<n; i++){
      cin>>m;
      
      cout<<DP[m]<<endl;
    }
  
 
      return 0;
}
