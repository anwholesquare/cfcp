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
    string s;
    cin >> s;
    ll sum = 0;
    for (ll i =0; i<n; i++) {
        if(s[i] == 'L') {
            sum += i;
        }else{
            sum += n-i-1;
        }
    }
    //cout << sum << endl;
    if (n == 1) {cout << 0 << endl; return;}

    vector<ll> v ;
    if (n % 2 == 0) {
        for (ll i =0; i < n/2; i++) {
            
            if (s[i] != 'R') {
                v.pb((n-i-1) - i);
            }
        }
        for (ll i =n/2; i < n; i++) {
            if (s[i] != 'L') {
                v.pb(i - (n-i-1));
            }
        }
    }
    if (n % 2 == 1) {
        for (ll i =0; i <= (n/2) -1 ; i++) {
            if (s[i] != 'R') { 
                v.pb((n-i-1) - i);
            }
        }
        for (int i = (n/2) + 1; i < n; i++) {
            if (s[i] != 'L') {
                v.pb(i - (n-i-1));
            }
        }
    }
    
    if (v.size() == 0) {
        int d = n;
        while (d--) {
            cout << sum << " ";
        }
        cout << endl;
        return;
    }
    vector<ll> ans;
    sort(all(v), greater<ll>());
    ans.pb( sum + v[0]);
    for (ll i =1; i < v.size(); i++) {
        ans.pb(ans[i-1] + v[i]);
    }

    for (ll i =0; i<n; i++) {
        if (i <= (ans.size() -1)) {
            cout << ans[i] << " ";
        }else {
            cout << ans.back() << " ";
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