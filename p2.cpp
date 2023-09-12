//2023-09-07 23:02:12
//@pawlocat
#include<bits/stdc++.h>
#define int int64_t
#define all(a) (a).begin(), (a).end()
using namespace std;
const int R = (int) 1e9 + 7;
void sol(){
  int n, MIN = INT_MAX;
  cin >> n;
  for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    int c = a + (b / 2);
    if(b != 1 && b % a == 0 ) c--;
    MIN = min(c, MIN);
  }
  cout << MIN << '\n';
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