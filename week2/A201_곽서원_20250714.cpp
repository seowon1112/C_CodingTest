#include <iostream>
#include <stack>
using namespace std;
//<> 길이가 3 이상 소문자와 공백으로 이루어져있음.
//단어는 소문자와 숫자. 연속하는 단어는 공백하나로 구분.
int main() {
  string str;
  stack <char> stack;
  char a='>';
  string str2;
   
  getline(cin,str);

  int count=0; 
    for(int i=0; i<str.length(); i++){
     
     if(a=='<'){
      str2+=str[i];
      if(str[i]=='>') a='>';
       continue;
     }
      // egduj gduje
       if(i==str.length()-1 && str[i]!='>'){
         stack.push(str[i]);
         count++;
       }
      if(str[i]=='<' || str[i]==' ' || (i==str.length()-1 && str[i]!='>')){
        if(!stack.empty()){
          for(int j=0; j<count; j++){
            str2+=stack.top();
            stack.pop();
          }
        }    
        if(str[i]=='<') a='<';
          count=0;
          if(i!=str.length()-1)
          str2+=str[i];
          continue;
        
      } 
      stack.push(str[i]);
      count ++;
      
    }
  
  cout << str2;
  return 0;
}
