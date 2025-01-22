#include<iostream>
using namespace std;
int main() {
  int N,v;
  cin >> N;
  int sum=0;
  int a[N];
  
  for (int i=0; i<N; i++){
    cin >> a[i] ; 
  }
  
  cin >> v; 
  
  for (int i=0; i<N; i++){
    if(a[i]==v) sum ++;  
  }
  cout << sum;
}