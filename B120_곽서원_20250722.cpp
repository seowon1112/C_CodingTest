#include <iostream>
#include <stack>
using namespace std;
//레이저로 자르면 하나가 늘어남.
//중복이 되게 해야하니 안쪽 ()면 추가해야됨.
// 2 1 4 4 1 5 () 이거를 저장해서 ) 이거를 만나면 이때까지 저장됐던 걸 더하는
// 식으로.
int main() {
  string str;
  stack<char> stack;
  int mult = 0;
  int total = 0;
  string str2;
  cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
          stack.push(str[i]);
          mult++;
        }
        if (str[i] == ')') {
          mult--;
          stack.pop();
          if (str[i - 1] == '(') {
            total += mult;
            if (stack.size() < 1) {
              mult = 0;
              continue;
            }
          }
          else{
            total++;
          }
        }
    }
    cout << total;
}
