//@pawlocat
#include <bits/stdc++.h>
#define int int64_t
#define all(a) (a).begin(), (a).end()
using namespace std;
const int R = (int)1e9 + 7;

int n, m;

void dfs(vector<vector<bool>>& v, vector<bool>& visited, int curr, int b) {
  if (visited[curr]) {
     return;
  }
  visited[curr] = true;
  
  for (int i = 1; i <= n; i++) {
    if (v[curr][i]) {
      if (i == b) {
        cout << "Yes" << '\n';
        exit(0);
      }
      dfs(v, visited, i, b);
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;
  vector<vector<bool>> v(n + 1, vector<bool>(n + 1));
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    v[a][b] = true;
  }
  int a, b;
  cin >> a >> b;
  
  vector<bool> visited(n + 1, false);
  dfs(v, visited, a, b);
  
  cout << "No" << '\n';
}
