//2023-09-02 15:00:20
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
  while(cin >> n && n != 0){
    priority_queue<int, vector<int>, greater<int>> v;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      v.push(x);
    }
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
      int a = v.top();
      v.pop();
      int b = v.top();
      v.pop();
      cnt += a + b;
      v.push(a + b);
    }
    cout << cnt << '\n';
  } 
}