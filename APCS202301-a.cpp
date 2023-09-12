//2023-09-07 21:58:38
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
  int k, worst = 0, MAX = -1, time = 0;
  cin >> k;
  int t = k;
  while(t--){
    int a, b;
    cin >> a >> b;
    if(b == -1) worst++;
    if(b > MAX){
      MAX = b;
      time = a;
    } 
  }
  int ans = MAX - k - (worst * 2);
  if(ans < 0) ans = 0;
  cout << ans << ' ' << time << '\n'; 
}