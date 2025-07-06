#include<iostream>
using namespace std;

  int count[26];
  int n=0;
  string str;

int main(){ 
 

  cin >> str;
  
  //아스키코드 : 대문자 65~90, 소문자 97~122

  for(int i=0; i<str.length(); i++){
    str[i]=toupper(str[i]);
    
  }
  for(int i=0; i<str.length(); i++){

    count[str[i]-65]++;
  
  }
    
   int max=0;
  int index=0;
  for(int i=0; i<26; i++){
    if(max<count[i]) {
      max = count[i];
      
      index=i;
    }
    }
  
  for(int i=0; i<26; i++){
    if(max==count[i]) n++;
  }
  
  if(n>1) 
    cout << "?";
    else cout << (char)(index+65);

  return 0;
}
