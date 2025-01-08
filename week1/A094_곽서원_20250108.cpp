#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

  
int main(){ 
  int count=0;
  string str;
  cin >> str;
  string str1[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};
  int index=0;

 
  //v = str2.erase(1,str2.length()) + str3.erase(1,str3.length());
  //  cout<< v << "\n";
  
  for(int i=0; i<8; i++){
    while(1){
      index=str.find(str1[i]);
      if(str.find(str1[i])==string::npos) break;
      str.replace(index,str1[i].length(),"@");
    }
  
  }
  
  cout << str.length();
  return 0;
}
