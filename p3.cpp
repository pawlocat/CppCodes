//2023-09-07 23:18:09
//@pawlocat
#include<bits/stdc++.h>
#define int int64_t
#define all(a) (a).begin(), (a).end()
using namespace std;
const int R = (int) 1e9 + 7;
void sol(){
  int l, r;
  cin >> l >> r;
  for(int i = l; i < r; i++){
    for(int j = i + 1; j < r; j++){
      int c = __gcd(l, r);
      if(c != 1){
        cout << i << ' ' << j << '\n';
        return;
      }
    }
  }
  cout << -1 << '\n';
}
signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--)
    sol(); 
}