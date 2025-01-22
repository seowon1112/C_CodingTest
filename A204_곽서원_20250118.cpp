#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  int result = 0;
  int num=0;
  
    cin >> n;
      for(int i=5; i<=125; i*=5){
        result+=n/i;
      }
    cout<< result;
    return 0;
}
