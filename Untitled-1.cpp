#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, k;

int sol(vector<vector<int>> v) {
  vector<int> f(n);
  for (auto &i : f)
    cin >> i;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += v[i][f[i]];
    v[i][f[i]] = 0;
  }

  vector<vector<int>> s(m, vector<int>(m, 0)); //(地點/流量)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      s[f[i]][j] += v[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] > 1000)
        sum += (s[i][j] - 1000) * 2 + 3000;
      else
        sum += s[i][j] * 3;
    }
  }
  return sum;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m >> k;

  vector<vector<int>> v(n, vector<int>(m));
  for (auto &i : v) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  int ans = INT_MAX;
  while (k--) {
    ans = min(ans, sol(v));
  }
  cout << ans;
}