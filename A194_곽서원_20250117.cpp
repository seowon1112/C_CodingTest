#include<iostream>
using namespace std;



int main() {
;ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int x=0;
  int y=0;
  for(int i=1; i<=n; i++){
    cin >> x >> y;
    cout << "Case #"<<i << ": "<<x<<" + " << y << " = " << x+y << "\n";
    
  }
  
}