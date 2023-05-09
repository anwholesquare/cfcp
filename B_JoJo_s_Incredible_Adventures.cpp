#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

ll findMaxValue(int N) {
    ll max_value = 0;
    for (ll i = 1; i < N; i++) {
        ll value = (N - i) * (i + 1);
        if (value > max_value) {
            max_value = value;
        }
    }
    return max_value;
}

void solve () {
    string s;
    cin >> s;
    ll c1 = 0, cnt = 0;
    ll last = -1;
    ll n = s.size();
    for (int i = s.size()-1; i>=0; i--) {
        if (s[i] == '0') {
            last = i;
            break;
        }
    }
    if (last == -1 ) {
        
        cout << n*n << endl;
        return;
    }
    ll i = (last+1) % n;
    while (true) {
        if (s[i] == '1') {
            cnt++;
        }else {
            c1 = max(c1,cnt);
            cnt = 0;
        }
        if (i == last) break;
        if (i == s.size() -1) i = 0;
        else{
            i++;
        }
    }

    if (c1 == 0) {
        cout << 0 << endl; return;
        return;
    }else {
        cout << max(max(1LL,c1),findMaxValue(c1)) << endl;
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