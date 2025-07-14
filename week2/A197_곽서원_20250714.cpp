#include<iostream>
using namespace std;


int main() {

  int N, M;
  int i,j,tmp;
  cin >> N >> M;
  int ba[N];
  
  for(int f=0; f<N; f++)
    ba[f]=f+1;
  
  for(int f=0; f<M; f++){
    cin >> i >> j;
    tmp = ba[i-1];
    ba[i-1]=ba[j-1];
    ba[j-1]=tmp;
    
    
  }
  
  for(int f=0; f<N; f++)
    cout << ba[f] << " ";
  
  return 0;
  
}