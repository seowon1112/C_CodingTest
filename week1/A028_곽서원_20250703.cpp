#include <iostream>
using namespace std;

int main() {

  string a, b;
  cin >> a >> b;
  int tmp = 0;

  string str[10000];
  int t = 1;
  int j = 0;
  char p[a.length()];

  string c;
  if (a.length() < b.length()) { //더 길이가 긴것을 a로 두기.
    c = a;
    a = b;
    b = c;
  } 

  for(int i=0; i<a.length()-b.length(); i++){ //한쪽이 짧다면 길이 맞추기.
    p[i] = '0';
  }
  for(int i=a.length()-b.length(); i<a.length(); i++){
    p[i]=b[i-a.length()+b.length()];
    
  }
 
  j = a.length() - 1;
  for (int i = a.length() - 1; i >= 0; i--) { // 마지막이 9+1 이여서 자리수 가 늘어날때를 대비해 첫번째 배열을 남겨둠.
    
     if((((a[i] - '0') + (p[j] - '0')) + tmp)>=10 && i==0){ // 마지막 연산이 9+1일 때 첫번째 인덱스에 1을 두고 두번째 인덱스에 10을 뺀 값을 저장.
    
         str[0]='1';
         str[1]=(((a[i] - '0') + (p[j] - '0') +tmp- 10) + '0') ;
           t=0;
         break;
     }
    
    if( (((a[i] - '0') + (p[j] - '0')) + tmp)>=10){  // 마지막 연산이 아닌데 자릿수를 넘을 때 올림 저장, 10을 뺀 값을 배열에 넣은 후 다음 단계로 이동.
      str[i+1] = (((a[i] - '0') + (p[j] - '0')) + tmp) - 10 + '0'; 
      tmp=1;
   
    } else{
    str[i + 1] = (((a[i] - '0') + (p[j] - '0')) + tmp) + '0'; // 기본 공식 : 각각의 자릿수에 맞는 덧셈 한것을 배열에 넣는다. 이때 지난번 올림을 기억해 더함.
    tmp=0;

    }
    j--;
  }

  for (int i = t; i < a.length() + 1; i++) { //첫번째 배열이 들어가 있으면 첫번 째 부터 출력 
    cout << str[i];
  }

  return 0;
}
