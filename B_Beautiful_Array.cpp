#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, k, s, b;
    cin >> n >> k  >> b >> s;
    ll limup = b*k + k -1;
    ll limdown = b*k;

    ll mostput = (n-1) * (k-1);
    //cout << limup << " " << limdown << " " << mostput << ": ";
    if (s > (limup+ mostput) || s < (limdown)) {
        if (s ==0 && b == 0) {
            for (int i =0 ; i <n; i++) {
                cout << "0 ";
            }
            cout << endl; return;
        }else {
            cout << -1 << endl; return;
        }
    }else {
        if (s <= limup) {
            for (int i =0; i<n-1; i++) {
                cout << 0 << " ";
            }
            cout << s << endl; return;
        }else {
            if (n > 1) {
                ll need = s - limup;
                cout << limup << " ";
                ll valset = 0;
                for (int i = 0; i < (n-1); i++) {
                    if (need <= 0) {cout << 0 << " ";}
                    else {
                        valset = min(need, k-1);
                        need -= valset;
                        cout << valset << " ";
                    }
                }
                cout << endl;
            }else{
                if (n==1) {cout << -1 << endl;}
            }
            
            
        }
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