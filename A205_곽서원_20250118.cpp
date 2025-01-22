#include <iostream>
using namespace std;

int zero(int n){
  int result1 = 0;
  int result2 = 0;
  for(long long i=5; i<=1220703125; i*=5){
    result1+=n/i;
  }

  return result1;
}
int zero2(int n){
  int result1 = 0;
  int result2 = 0;
  for(long long i=2; i<=1073741824; i*=2){
    result2+=n/i;
  }
  return result2;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  long long n,r;
  int result =0;
  int result2=0;
  int num=0;
  
    cin >> n >> r;
     result=zero(n)- zero(r)- zero(n-r);
     result2=zero2(n)- zero2(r)- zero2(n-r);  

  if(result<result2) 
     cout << result;
  else cout << result2;
    return 0;
}
