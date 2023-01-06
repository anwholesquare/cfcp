#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

bool isValid(string s) {
    vector<char> v;
    for (char c : s) {
      switch (c) {
      case '(':
        v.push_back(c);
        break;
      case ')':
        if (v.empty() || v.back() != '(')
          return false;
        v.pop_back();
        break;
      }
    }
    return v.empty();
  }

void solve () {
    string s;
    cin >> s;
    if (isValid(s)) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}