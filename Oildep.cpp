//2023-09-02 11:40:54
//@pawlocat
#include<bits/stdc++.h>
#define int int64_t
#define all(a) (a).begin(), (a).end()
using namespace std;
const int R = (int) 1e9 + 7;
int n, m;
int dX[] = {-1, -1, -1, 0, 0, 1, 1, 1}, dY[] = {-1, 0, 1, -1, 1, 1, 0, -1};
void dfs(vector<vector<bool>> &v, int x, int y){
  v[x][y] = 0;
  for(int i = 0; i < 8; i++){
    int nx = x + dX[i], ny = y + dY[i];
    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
    if(!v[nx][ny]) continue;
    dfs(v, nx, ny);
  }
}
signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  while(cin >> n >> m && m != 0){
    vector<vector<bool>> v(n, vector<bool> (m));
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        char c;
        cin >> c;
        v[i][j] = (c == '@');
      }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(v[i][j]){
          dfs(v, i ,j);
          ans++;
        } 
      }
    }
    cout << ans << '\n';       
  }
}