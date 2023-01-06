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
    vector<ll> v (n);
    set<ll> s;
    for (int i =0; i<n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }

    if (s.size() == 1) {
        cout << *s.begin() * n << endl;
    }
    else if (v.size() == 2) {
        ll a = *max_element(all(v)), b = *min_element(all(v));
        if (a+b > abs(a-b) * 2) { cout << a + b << endl;}
        else cout << abs(a-b)*2 << endl;
    }else if (v.size() == 3) {
        int maxidx = max_element (all(v)) - v.begin();
        if (v[maxidx] == v[0] || v[maxidx] == v[2]) {
            cout << v[maxidx] * n << endl; return;
        }
        else if (maxidx == 1) {
            ll sum = 0;
            accumulate(all(v), sum);
            if ()

        }
    }
    else {
        int maxidx = max_element (all(v)) - v.begin();
        int minidx = min_element (all(v)) - v.begin();
        for (int i = n-1; i>=0; i--) {
            if (v[i] == v[maxidx]) {maxidx = i; break;}
        }
        ll sum = 0;
        for (int i =0; i<n-1; i++) {
            sum += v[i];
            if (i == maxidx || i+1 == maxidx) {continue;}
            else {
                cout << v[maxidx] * n << endl; return;
            }
        }
        cout << sum + v.back() << endl;
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