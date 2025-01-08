#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
    //연산을 사용하는 횟수의 최솟값. 3으로 최대한 나누고. 안됐을땐 1을 빼주고 3 테스트. 3안되면 2테스트 
  int n;
  cin>>n;
  int DP[1000001];

  DP[1]=0;
  DP[2]=1;
  DP[3]=1;

  for(int i=4; i<=n; i++){
    DP[i]=DP[i-1]+1;
    if(i%3==0){
      DP[i]=min(DP[i],DP[i/3]+1);
    }
    if(i%2==0){
      DP[i]=min(DP[i],DP[i/2]+1);
    }

    
  }
  cout<< DP[n];
      return 0;
}
//124
//123
//31
//30
//10
//9
//3
//1