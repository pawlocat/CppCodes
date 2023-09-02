//2023-09-01 21:12:41
//@pawlocat
#include<bits/stdc++.h>
#define int int64_t
#define all(a) (a).begin(), (a).end()
using namespace std;
const int R = (int) 1e9 + 7;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<pair<int, int>> f(n);
  for(int i = 0; i < n; i++){
    cin >> f[i].second >> f[i].first;
  }
  sort(all(f));
  int time = f[0].first;
  for(auto & x : f) cout << x.first << ' ';
  cout << '\n';
  for(auto & x : f) cout << x.second << ' ';
  cout << '\n';
  for(int i = 1; i < n - 1; i++){
    if(time > f[i].second){
      cout << i << ' ' << time << ' ' << f[i].second << '\n';
      cout << "No" << '\n';
      exit(0);
    }
    time += f[i].first;
  }
  cout << "Yes" << '\n';
}