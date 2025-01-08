#include <iostream>
using namespace std;

int main() {

  string num;
   cin >> num;
  char tmp='0';
  for(int i=num.length()-1; i>0; i--){
    for(int j=num.length()-1; j>0; j--){
      if(num[j]>num[j-1]){
        swap(num[j],num[j-1]);
      }
    }
  }  
  cout << num;
  return 0;
}
