#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
 int a, b;
  cin >> a >> b ;

  b= b-45; 
 if(b<0){
   b= 60+b;
   if(a==0)
    a=23;
   else
   a--;
 }
  
  cout << a<< " "<< b;
}