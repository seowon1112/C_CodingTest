#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string str;
  cin >> str;
  string s[str.length()];
  int length=str.length();
  for(int i=0; i<length; i++){ 
      s[i]=str;
      str.erase(0,1);
  }
  
  sort(s,s+length);
  
  for(int i=0; i<length; i++){ 
     cout<<s[i]<<endl;
  }
}
