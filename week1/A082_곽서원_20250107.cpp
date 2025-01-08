#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// bool compare<(const tmp& a, const tmp& b){
//   return a.age<b.age;
// }
  

struct tmp{
  int age;
  string name;
};

bool compare(tmp a, tmp b){
  return a.age<b.age;   
}

int main() {
  int n;
  cin >> n;
  vector<tmp> v;
  tmp t;
  for(int i=0; i<n; i++){
   
    cin>> t.age >> t.name;
    v.push_back(t);
  }

  stable_sort(v.begin(),v.end(),compare);

  for(int i=0; i<n; i++){
  
     cout<< v[i].age << " " << v[i].name<<"\n";

  }
  return 0;
}