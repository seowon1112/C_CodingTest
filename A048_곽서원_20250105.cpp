#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

  
int main(){ 
  // 먼저 단어가 몇개 있는지 검사.
  // 갯수만큼 안이어져있으면 break; 갯수만큼 for문을 돌리는데 시작점은 i고 끝점은 갯수만큼이다. 
  // 갯수만큼 이어져있으면 갯수만큼 뛰어넘기. 끝까지 가면 count++;

  int n;
  cin >> n;
  string str;
  int count=0;
  int tmp=0;
  int tmp2=0;
  int kk=0;
  int reward=0;
  int reward2=0;
  
  for(int i=0; i<n; i++){   //aaazbz 0 1 2 3 4 5       6
    cin >> str;
    tmp=0; tmp2=0;
    reward=0; reward2=0;
    
      for(int j=0; j<str.length(); j++){
            reward++;
          tmp=0; tmp2=0;
       
          for(int k=0; k<str.length(); k++){ // 처음부터 끝까지 몇개 있는지 검사     
      
            if(str[j]==str[k]) tmp++;
          }
      
          for(int f=j; f<tmp+j; f++){ // 갯수만큼 이어져있는지 검사.
           
            if(str[j]==str[f]) tmp2++; 
          }
        
  
          if(tmp==tmp2){
      
             j+=tmp-1;
             reward2++;
             tmp=0; tmp2=0;
          }
         
         
        
      
        }
    
      if(reward==reward2){
              count++; 
            } 
     
  }
  
  cout << count;
  return 0;
}
