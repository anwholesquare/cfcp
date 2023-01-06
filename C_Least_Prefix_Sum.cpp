#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long int ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    vector<ll> v (n);
    for (int i = 0; i<n; i++)  {
        cin >> v[i];
    }

    ll o, s, d, key;
    o = 0; s= 0; d =0; key = m;
    priority_queue<ll, vector<ll>,greater<ll> > q;
    priority_queue<ll> f;
    bool cond1 = (v[m-1] <= 0);
    bool cond2 = m != 1;

    for (int i = key; i < n; i++) {
        if (v[i] < 0) {
            q.push(v[i]);
        }
        s += v[i];
        while (s < 0) {
            d= q.top();
            o++; d *= -1;
            s += (d << 1);
            q.pop();
        }
    }

    if (cond1) s = v[m-1];
    else if (cond2) {s = -1*v[m-1];o++;}
    
    ll nStart = m-2;
    for (int i = nStart; i >= 1;i--) {
        if (v[i] > 0) f.push(v[i]);
        s += v[i];
        while (s > 0) {
            d = f.top();
            o++; d *= -1;
            s += (d << 1);
            f.pop();
        }
    }

    cout << o << endl;
    return;

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