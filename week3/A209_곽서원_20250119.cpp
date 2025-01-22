#include <iostream>
#include <cmath>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
    int a,b,m;
    cin >> a >> b;
    cin >> m;
    int num[m];
    int sum=0;
    int ans[10000];
    int temp=0;
    
        for(int i=0; i<m; i++){
          cin>>num[i];
          sum+=num[i]*pow(a,m-(i+1));
        }

        int t=0;
        while(sum>=b){
          ans[t]=sum%b; 
    
          sum=sum/b;
          t++;
          if(sum<b){
            ans[t]=sum;
            t++;
            break;
          } 
          
        }
    
        for(int i=t-1; i>=0; i--){
          
          cout << ans[i] << " ";
        }
        
    
   
      return 0;
}
