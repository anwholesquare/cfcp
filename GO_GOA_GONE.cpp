#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

map <int, map<int, bool> > adj;
ll maxval = 0;
map<int, bool> entered ;
vector<ll> v(9);
void reset () {
    for (int i=1; i<=8; i++) entered[i] = 0;
}
void collect (int src, int mainsrc , map<int, bool> enterable) {
    entered[src] = 1;
    vector<ll> cadj;
    for (int i=1; i<=8; i++) {
        if (entered[i] == 1) continue;
        if (enterable[i] == 1 && adj[src][i] == 1) cadj.pb(i);
    }

    if (cadj.size() == 0) {
        ll sum = 0;
        for (int i =1; i<=8; i++) { 
            if (entered[i] == 1) {
                sum += v[i];
            }
        }
        maxval = max(sum , maxval);
    }else { 
        for (int i=1; i<=8; i++) enterable[i] = 0;
        for (int i : cadj) {
            enterable[i] = 1;
        }
        for (int i : cadj) {
            collect(i, mainsrc, enterable);
        }
    }
    entered[src] = 0;
}

void moneycollect ( int n ) {
    vector<ll> cadj;
    map<int, bool> enterable;
    for (int i=1; i<=8; i++) enterable[i] = 0;
    for (int i=1; i<=8; i++) {
            if (adj[n][i] == 1) enterable[i] = 1;
    }
    reset();
    collect(n,n,enterable);
}


void solve () {
    
    for (int i=1; i<=8; i++) cin >> v[i];
    ll p;
    cin >> p;
    ll x , y;

    for (int i =1; i<= 8; i++) {
        for (int j =1; j<=8; j++) {
            if (i == j) {
                adj[i][j] = 0; continue;
            }
            adj[i][j] = 1;
        }
    }
    for (int i =1; i <=p; i++) {
        cin >> x >> y;
        adj[x][y] = 0;
        adj[y][x] = 0;
    }
    reset();
    for (int i =1; i<=8; i++)moneycollect(i);
    cout << maxval << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}