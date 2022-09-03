#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mpr make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string s;
    cin >> s;
    vector<pair <ll, ll> > v1, v2;
    ll i =0;
    for (i = 0; i<s.size(); i++) {
        if (s[i] == '^') break;
        if (s[i] >= '0' && s[i] <= '9') v1.pb(mpr(s[i] - '0', i));
    }
    ll mid = i;
    //cout << mid << endl;
    for (i = i+1; i <s.size();i++) {
        if (s[i] >= '0' && s[i] <= '9') v2.pb(mpr(s[i] - '0', i));
    }
    ll sum = 0;
    for ( int j = 0; j <v1.size(); j++) {
        sum += (v1[j].first * ( mid  - v1[j].second ));
        
    }

    ll sum1 = 0;
    for (int j =0; j <v2.size(); j++) {
        sum1 += (v2[j].first* (v2[j].second - mid ));
    }
    //cout << sum << " " << sum1 << endl;
    if (sum == sum1) { cout << "balance\n";}
    else if (sum < sum1) {cout << "right\n";}
    else {cout << "left\n";}

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