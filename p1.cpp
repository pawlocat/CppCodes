//2023-09-07 22:36:32
//@pawlocat
#include<bits/stdc++.h>
#define int int64_t
#define all(a) (a).begin(), (a).end()
using namespace std;
const int R = (int) 1e9 + 7;
void sol(){
  double a ,b, c;
  cin >> a >> b >> c;
  double avg = (a + b) / 2;
  if(a == b){
    cout << 0 << '\n';
  }
  else if(c > avg){
    cout << 1 << '\n';
  }
  else{
    avg -= a;
    avg = abs(avg);
    avg /= c;
    cout << (avg > (int)avg ? (int)avg + 1: (int)avg) << '\n';
  }
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