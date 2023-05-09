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
    stack <char> st;
    for (int i=0; i<s.size(); i++) {
        char c = s[i];
        if (c == '(') st.push('(');
        else if (c == ')' && !st.empty() && st.top() == '(') st.pop();
        else {
            cout << "NO\n"; return;
        }
    }
    cout << "YES\n"; return;

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