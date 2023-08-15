#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string s;
    cin >> s;
    int n = s.size();
    set<char> st;
    if (n % 2 == 0) {
        for (auto i: s) {
            st.insert(i);
        }
    }else{
        for (int i=0; i<n/2; i++) {
            st.insert(s[i]);
        }
        for (int i=(n/2) + 1; i <n; i++) {
            st.insert(s[i]);
        }
    }
    int cnt = st.size();
    if (cnt >= 2) {
        cout << "YES\n"; return;
    }
    else {
        cout << "NO\n"; return;
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}