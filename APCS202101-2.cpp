//date: 2023/09/12 22:35
#include<bits/stdc++.h>
#define int int64_t
#define all(a) (a).begin(), (a).end()
using namespace std;
const int R = (int) 1e9 + 7;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, m, k, MIN = INT_MAX;
  cin >> n >> m >> k;
  vector<vector<int>> v(n, vector<int>(m));
  for(auto & x : v) for(auto & y : x) cin >> y;
  while(k--){
    int sum = 0;
    vector<int> s(n);
    for(auto & x : s) cin >> x;
    vector<vector<int>> c(m, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        c[s[i]][j] += v[i][j];
      }
    }
    for(int i = 0; i < m; i++){
      for(int j = 0; j < m; j++){
        if(i == j) sum += c[i][j];
        else{
          if(c[i][j] <= 1000) sum += c[i][j] * 3;
          else sum = sum + (3 * 1000) + (c[i][j] - 1000) * 2;
        }
      }
    }
    MIN = min(MIN, sum);
  } 
  cout << MIN << '\n';
}
/* 
900 500 300
300 600 1200

2 0
c[0][1,2,3] => 300 600 1200
c[1][1,2,3] => 0   0   0
c[2][1,2,3] => 900 500 300

2 2
c[0][1,2,3] => 0   0   0
c[1][1,2,3] => 0   0   0
c[2][1,2,3] => 900+300 500+600 300+1200 
*/
