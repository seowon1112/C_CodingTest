#include <algorithm>
#include <cmath>
#include <iostream>
#define MOD 10007
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  long long dp[2][100001] = {
      0,
  };
  long long arr[2][100001] = {
      0,
  };

  int m;
  for (int i = 0; i < n; i++) {
    cin >> m;
    for (int j = 1; j <= m; j++) {
      cin >> arr[0][j];
    }
    for (int j = 1; j <= m; j++) {
      cin >> arr[1][j];
    }
    dp[0][0] = 0;
    dp[1][0] = 0;
    dp[0][1] = arr[0][1];
    dp[1][1] = arr[1][1];
    for (int j = 2; j <= m; j++) {
      dp[0][j] = arr[0][j] + max(dp[1][j - 1], dp[1][j - 2]);
      dp[1][j] = arr[1][j] + max(dp[0][j - 1], dp[0][j - 2]);
    }
    cout << max(dp[0][m], dp[1][m]) << endl;
  }

  return 0;
}
