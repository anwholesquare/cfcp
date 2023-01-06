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

    ll prev = 0;
    ll first = 0;
    cin >> prev;
    first = prev;
    ll min = INT_MAX, mini= 1;
    for (int i =1; i<n; i++) {
        ll x;
        cin >> x;
        ll ans = abs(x-prev);
        if (min > ans) {
            min = ans; mini = i;
        } 
        prev = x;
    }
    if (min > abs(first-prev)) {
        mini = n;
    }
    if (mini + 1 > n) {
        cout << mini << " " << ((mini+1) % n) << endl;
    }else{
        cout << mini << " " << (mini+1) << endl;
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