//2023-09-09 14:07:45
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
  cin >> n;
  m = n;
  bool flag = false;
  for(int i = 2; i <= n; i++){
    int cnt = 0;
    while(m % i == 0){
      cnt++;
      m /= i;
    }
    if(cnt > 1){
      if(flag) cout << " * ";
      cout << i << "^" << cnt;
      flag = true;
    }
    else if(cnt == 1){
      if(flag) cout << " * ";
      cout << i ;
      flag = true;
    } 
    
  } 
}