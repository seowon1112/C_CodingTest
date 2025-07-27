#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  stack <int> stack;
  int num[n];
  int d=0;
  int siba[n];
  int t=n-1;
     for(int i=0; i<n; i++){
     cin >> num[i];
     
     } 
  
    for(int i=n-1; i>=0; i--){
      if(i==n-1){
        stack.push(num[i]); 
        siba[t]=-1;
        t--;
        continue;
      }
      
      while(1){
        if(stack.empty()){
           siba[t]=-1;
           t--;
          stack.push(num[i]);
          break;
        }
        if(num[i]<stack.top()){ // 왼쪽께 더 작으면 top을 출력하고 push 해야함. 
          siba[t]=stack.top();
          t--;
          stack.push(num[i]);
          break;
        }
        else {
          stack.pop();
        }
      }

      
      
    }
    for(int i=0; i<n; i++){
      cout << siba[i] <<" ";
    }
}
