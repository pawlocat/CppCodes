//2023-09-05 22:33:52
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
  int a, b, m;
  cin >> a >> b >> m;
  while(m--){
   int x; cin >> x;
   if(b == 0){
    cout << (x % 2 == 0 ? "Yes" : "No") << '\n';
    continue;
   } 
   else{
    x -= abs(b);
    if(x < 0){
      cout << "No" << '\n';
    }
    else if(x == 0){
      cout << "Yes" << '\n';
    }
    else{
      cout << (x & 1 ? "No" : "Yes") << '\n';
    }
   }
  }

}