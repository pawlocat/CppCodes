//2023-09-05 21:51:49
//@pawlocat
#include<bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
const int R = (int) 1e9 + 7;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);

  for(auto & x : v) cin >> x;
  int ans = 0;
  for(int i = 0; i < n; i++){
    int sum = 0, MIN = 1e5;
    for(int j = i; j < n; j++){
      MIN = min(MIN, v[j]);
      ans = max(ans,(j - i + 1 ) * MIN);
    }
  }
  cout << ans << '\n';
}