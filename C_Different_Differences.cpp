#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll k , n;
    cin >> k >> n;
    ll bad = n - k;
    ll j = 1, diff = 1;
    cout << j << " "; 
    for (int i =1; i<k;i++) {
        if (bad >= (diff-1)) {
            bad = bad -  (diff-1);
            j = j + diff;
            cout << j<< " ";
            diff++;
        }else {
            j++;
            cout << j << " ";
        }
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