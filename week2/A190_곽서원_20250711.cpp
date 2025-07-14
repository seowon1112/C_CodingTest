#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
 int a,b,c;
  int money =0;
  int top=0;
  cin >> a >> b >> c;
  
  if(a==b && b==c)
    money = 10000+a*1000;
    
    else if((a==b&& b!=c) || (a==c &&c!=b)||(b==c&&c!=a)){
     if(a==b||a==c)
      money = 1000+a*100;
     else money = 1000+b*100;
      
    }
  else {
      if(a>b) top = a;
      if (b>top) top = b;
      if (c>top) top = c;
      money = top*100;
    }
  cout << money;
}