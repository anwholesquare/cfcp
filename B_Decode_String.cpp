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
    string t;
    cin >> t;
    vector<char> v;
    for (int i =t.size() -1; i >= 0; i--) {
        int val = t[i] - '0';
        if (val == 0) {
            int prev2 = t[i-2] - '0';
            int prev1 = t[i-1] - '0';
            char c = 'a' + (prev2*10 + prev1) - 1;
            v.pb(c);
            i = i -2;
        }else{
            v.pb(val + 'a' - 1);
        }
    }

    for (int i = v.size() -1; i>=0; i--) {
        cout << v[i];
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