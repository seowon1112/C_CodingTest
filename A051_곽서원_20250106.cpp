#include<iostream>
#include <string>
using namespace std;

int main() {
  int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
  string grandma;
  cin >> grandma;
  int sum=0;
  for(int i=0; i<grandma.length(); i++){
    int index= grandma[i]-65;
    sum+= arr[index] ;
  }
    cout << sum;
	return 0; 
}