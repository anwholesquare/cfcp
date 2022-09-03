#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    string s;
    cin >> s;
    vector<bool> flag (26, 0);
    vector<bool> clearer (26, 0);
    ll cnt = 0;
    for (int i=0; i<s.size(); i++) {
        if (flag[s[i]-'a']) {
            cnt += 2;
            flag = clearer;
        }else{
            flag[s[i]-'a'] = true;
        }
    }
    cout << s.size() - cnt << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); std::cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}