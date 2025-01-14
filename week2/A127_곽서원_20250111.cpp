#include <iostream>
#include <cmath>
using namespace std;

int gcd(int n1,int n2){
  int tmp=0;
  while(n1%n2!=0){
    tmp=n2;
    n2=n1%n2;   
    n1=tmp;
  }
  return n2;
}
int lcm(int n1,int n2){
  return (n1*n2)/gcd(n1,n2);
}

int main() {
  int n;
  cin>> n;
  int n1, n2;
  for(int i=0; i<n; i++){
    cin >>n1>>n2;
      int tmp=0;
      if(n1<n2){
        tmp=n1;
        n1=n2;
        n2=tmp;
      }

      if(n1==n2){
        cout<<n1<<endl;
        continue;
      }

     cout << lcm(n1,n2)<<endl;
  }
  
  
  
}

