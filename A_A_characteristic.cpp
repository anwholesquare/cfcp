#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

unordered_map <ll, ll> m, m1;
vector<ll> v;

void solve () {
    ll n, k;
    cin >> n >> k;

    if (k == 0 && n == 2) {
        cout << "YES" << endl;
        cout << "1 -1" << endl; return;
    }



    ll l1 = 0;
    ll index = lower_bound(all(v), k) - v.begin();
    if (index < v.size() && v[index] > k) {
        index--;
    }
    while (index >= 0) {
        ll x = m[v[index]];
        ll y = m1[n - x];
        //cout << v[index] << " " << m1[n-x] << endl;
        if (v[index] + y == k) {
            l1 = x;
            break;
        }

        index--;
    }

    if (l1 != 0) {
        cout << "YES" << endl;

        for (int i=0; i<l1; i++){
            cout << "-1 ";
        }
        ll r = n -l1;
        for (int i=0; i<r; i++) {
            cout << "1 ";
        }
        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;

    for (int i = 2; i <=4950; i++) {
        m1[i] = i*(i-1)/2;
        m[(i *(i-1))/2] = i;
        v.pb((i *(i-1))/2);
    }
    while (t--) {
        solve();
    }
    return 0;
}