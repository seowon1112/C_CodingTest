#include<iostream>
using namespace std;


int main() {

  int x[11];
  int sum=10;
  int y;
  
  //for문을 통해 숫자를 입력받고 나머지들을 배열에 저장한다.
  for(int i=1; i<=10; i++){
    cin >>  y;
    y = y % 42;
    
    for(int j=1; j<i; j++){
      if(x[j]==y){
        sum --;
        break;
      }
    }
    x[i]=y;
  }
  cout << sum;
  //저장 후 다른 for문을 이용하여 이번에 입력 받는 값이 배열에 들어가있는지 검사한다.
  //sum ++
  
}