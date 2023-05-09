#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    ll d = n*n;
    vector<ll> v (d+1, 0);
    ll f = 1, l =d;
    for (int i=1; i<=d; i++) v[i] = i;
    vector<ll> res;
    int cnt = 1;
    while(cnt != d+1) {
        if (cnt&1) {res.pb(v[l]); l--;}
        else {res.pb(v[f]); f++;}
        cnt++;
    }
    int k  =0;
    for (int i=0; i<n; i++) {
        stack<int> st;
        for (int j = 0; j <n; j++) {
            if ((i+1)&1) {
                cout << res[k] << " ";
                k++;
            }else {
                st.push(res[k]); k++;
            }
        }
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
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