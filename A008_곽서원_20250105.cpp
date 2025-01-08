#include<iostream>
using namespace std;

  
int main(){ 
 
  int n;
  cin >> n;
  int student;
  
  for(int i=0; i<n; i++){
    float sum=0.0;
    float avg=0.0;
    float count=0.0;
    cin >> student;
    float grade[student];
    
      for(int j=0; j<student; j++){
        cin >> grade[j];
        sum+=grade[j];
      }
      avg= sum/(float)student;
      for(int j=0; j<student; j++){
        if(grade[j]>avg) count ++;
      }     
      avg= count/(float)student*100;
    cout << fixed;
    cout.precision(3);
    cout << avg << "%\n";

  }
  return 0;
}
