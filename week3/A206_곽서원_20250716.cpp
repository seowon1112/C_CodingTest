#include <iostream>
#include <cmath>
using namespace std;


int gcd(int a, int b){
  
  if(b == 0) return a;
  else return gcd(b,a%b);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n; int m;
  cin >> n >> m;
  int sbl[n];

    
    for(int i=0; i<n; i++){
      cin >> sbl[i];
      if(n==1){
        cout << sbl[i]-m;
        return 0;
      }
      sbl[i]=abs(sbl[i]-m);
    }
  
    int first=gcd(sbl[0],sbl[1]);
  
    for(int i=2; i<n; i++){
      first=gcd(first,sbl[i]);
    }
    cout << first;
    
      return 0;
}
