//2023-09-06 22:37:42
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
  int n, m;
  cin >> n >> m;
  vector<int> v[10001];
  for(int i = 0; i < 10001; i++) v[i].push_back(i);
  int MAX = 0, MAXnum = 0;
  while(m--){
    int a, b;
    cin >> a >> b;
    if(v[a].size() < v[b].size()) swap(a, b);
    for(int i = 0; i < v[b].size(); i++) v[a].push_back(v[b][i]);
    if(v[a].size() > MAX){
      MAX = v[a].size();
      MAXnum = a;
    }
  }
  cout << MAXnum << '\n';
  sort(all(v[MAXnum]));
  for(auto & x : v[MAXnum]) cout << x << ' ';
}