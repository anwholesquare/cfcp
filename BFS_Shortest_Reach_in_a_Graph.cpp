#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, e;
    cin >> n >> e;
    int level[n+1];
    for (int i=0; i<=n; i++) level[i] = -1;
    vector<int> adj[n+1];
    for (int i =0; i<e;i++) {
        ll u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int s;
    cin >> s;
    queue<int> q;
    q.push(s);
    level[s] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto i: adj[u]) {
            if (level[i] == -1) {
                q.push(i);
                level[i] = level[u] + 1;
            }
        }
    }

    for (int i =1; i<=n; i++) {
        if (i == s) continue;
        if (level[i] != -1) cout << level[i] * 6 << " ";
        else cout << level[i] << " ";
    }
    cout << endl;
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