#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int n=0;
  cin>>n;
  stack<double> stack;
  string str;
  cin>>str;
  float num[n];
  int t=0;
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  string Alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for(int i=0;i<str.length();i++){
     for(int j=0;j<n; j++){
        if(str[i]==Alpha[j]){
        str[i]=char(num[j]+48);
        }
     }
  }
  for(int i=0;i<str.length();i++){
    if(str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'){
      stack.push(str[i]-'0');
    } else{
      double b=stack.top();
      stack.pop();
      double a=stack.top();
      stack.pop();
      if(str[i]=='+'){
        stack.push(a+b);
      } else if(str[i]=='-'){
        stack.push(a-b);
      } else if(str[i]=='*'){
        stack.push(a*b);
      } else if(str[i]=='/'){
        stack.push(a/b);
      }
    }

  }
  cout<<fixed;
  cout.precision(2);

  cout<<stack.top()<<endl;
  
return 0;
}
