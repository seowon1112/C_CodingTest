#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

void call(int i, int j){
  cout << i+1 << "/"<< j+1;
  
}

int main() {
  
 int num[5001][5001] = {0};
  int n=1; int m=0;
  int x;
  
  num[0][0] = 1; num[1][0] =3;

  cin >> x;

  if(num[0][0] == x){
          call(0,0);
          return 0;
        } 
  if(num[1][0] == x){
          call(1,0);
          return 0;
        }

  for(int i=2; i<5000; i++){ //첫 번째 열 숫자 넣기.
    if(i % 2==0)  num[i][0] = num[i-1][0] +1; 
    else {
      num[i][0] = num[i-1][0] +6 + 4 * m;
      m++;
    }
    if(num[i][0] == x){
          call(i,0);
          return 0;
        } 
  }
  
  for(int i=0; i<5000; i++){
    if(i%2==0){ //짝수 행
      m=1;
      for(int j=1; j<5000; j++){
        if(j%2!=0) num[i][j] = num[i][j-1] + n; //홀수 열
        else{
          num[i][j] = num[i][j-1] + 4 * m;
          m++;
        } 
        if(num[i][j] == x){
          call(i,j);
          return 0;
        } 
     }
    } 
    else{ //홀수 행
      m=0;
      for(int j=1; j<5000; j++){
       if(j%2==0) num[i][j] = num[i][j-1] + n; //짝수 열
       else {
         num[i][j] = num[i][j-1] + 2+ 4 * m;  //홀수 열
         m++;
       }
        if(num[i][j] == x){
          call(i,j);
          return 0;
        } 
     }
       
    }
   n+=2;
   
  }
  
return 0;
}
