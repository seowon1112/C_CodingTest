#include <stack>
#include <iostream>
using namespace std;


int main() {  
  stack<int> stack;

  int n;
  cin >> n;
  string str;
  int num=0;
    for(int i=0; i<n; i++){
      cin >> str;
        if(str=="push"){
          cin >> num;
          stack.push(num);
          continue;
        }
        else if(str=="top"){
          if(stack.empty()==1){
            cout << -1 <<"\n";
            continue;
          }
          cout << stack.top();
        }
        else if(str=="size")
          cout << stack.size();
        else if(str=="empty"){
          if(stack.empty()==1)
            cout << 1;
          else cout << 0;
        }
        else if(str=="pop"){
          if(stack.empty()==1){
            cout << -1 <<"\n";
            continue;
          }
          num=stack.top();
          stack.pop();
          cout << num;
        }
        cout << "\n";
    }
  return 0;
}