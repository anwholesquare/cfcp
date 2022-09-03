#include "bits/stdc++.h"
using namespace std; 
typedef long long nn;
 
int t, n;
vector<int> a[100100];
 
int solve(int x) {
 
  if (!a[x].size()) return 0;
 
  int curr = a[x][0];
  int ans = 1;
 
  for (int i : a[x]) {
    if ((i & 1) != (curr & 1)) {
      ans++;
      curr = i;
    }
  }
 
  return ans;
 
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(0);
  
  cin >> t;
  while (t--) {
 
    cin >> n;
 
    for (int i = 1; i <= n; i++)
      a[i].clear();
 
    for (int i = 1; i <= n; i++) {
      int x; cin >> x;
      a[x].push_back(i);
    }
 
    for (int i = 1; i <= n; i++)
      cout << solve(i) << " \n"[i == n];
 
  }
  
}