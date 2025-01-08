#include <iostream>
#include <algorithm>
using namespace std;

int main() {
 
     
int a,b;
int i=0;
int c[1000];
int d=0;
  cin >> a;
  d=a;
 if(a==1) return 0;
 

   
     for(int j=2; j<=a; j++){
      
       if(a%j==0){
         a/=j;
         c[i]=j;
         i++;
         j=1;
         continue;
       }
      }
  

  
       sort(c,c+i);
       for(int t=0; t<i; t++){
        cout << c[t] << endl;
  }
  
  
  return 0;
}
