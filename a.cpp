//2023-09-05 23:48:21
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
  vector<int> v(n);
  for(auto & x : v) cin >> x;
  sort(all(v));
  cout << v[0] << ' ' << v[n - 1];
  for(int i = 0; i < n; i++){
    if(v[0] != v[i]){
      cout << " no" << '\n';
      exit(0);
    } 
    v[0]++;
  } 
  cout << " yes" << '\n';
}