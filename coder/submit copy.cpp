#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve (ll t) {
    cout << "Case #" << t << ": ";
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (int i =0; i<n; i++) {
        mp[s[i]]++;
    }
    map <char,ll>::iterator it;
    ll maxValue = -1;
    
    for (it = mp.begin(); it != mp.end(); it++) {
        if (it->second > maxValue) {
            maxValue = it->second;
        } 
    }

    //cout << maxValue << endl;
    vector<ll> res;
    ll sum =0;
    for (int i =0; i<n; i++) {
        ll f= (int) s[i] - 42;
        ll g = maxValue + 15;
        sum += (f%g) + 1;
        //cout << (f%g) + 1 << endl;
        res.push_back((f%g)+1);
    }
    ll maxlen = -1;
    for (int i =0; i<res.size(); i++) {
        ll start = res[i];
        ll l = i, r= i;
        for (int j =i+1; j<res.size(); j++) {
            if (res[j] >= start) r++;
            else break;
        }

        for (int j =i-1; j>=0; j--) {
            if (res[j] >= start) l--;
            else break;
        }
        ll sum = (r-l+1)*start;
        
        //cout << l << " " << r << endl;
        maxlen = max(sum, maxlen);
    }
    
    if (maxlen >= 28) {
        cout << "Yes " << maxlen << endl; return;
    }
    cout << "No " << (28-maxlen) << endl; return;



}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    int ts = 1;
    while (t--) {
        solve(ts);
        ts++;
    }
    return 0;
}