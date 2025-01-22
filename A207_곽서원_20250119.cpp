#include <iostream>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
    string num2;
    cin >> num2;
    if(num2=="0"){
      cout<<"0";
      return 0;
    } 
    int tmp=0;
      for(int i=0; i<num2.length(); i++){
        
        for(int j=0; j<3; j++){
          if(j==0){
            if(num2[i]>='4'){
              cout<<1;
              num2[i]-=4;
              tmp=1;
            }
            else {
              if(tmp==1)
              cout<< 0;
            }
          }
          if(j==1){
            if(num2[i]>='2'){
              cout<<1;
              num2[i]-=2;
               tmp=1;
            }
            else {
              if(tmp==1)
              cout<< 0;
            }
          }
          if(j==2){
             if(num2[i]>='1'){
              cout<<1;
              num2[i]-=1;
              tmp=1;
             }
             else {
               if(tmp==1)
               cout<< 0;
             }
          }
        }
      }
      return 0;
}
