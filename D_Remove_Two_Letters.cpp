#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

const int base = 31;
unsigned long long compute_hash(const string& str) {
    int n = str.length();
    unsigned long long hash_value = 0;
    unsigned long long power_of_base = 1;

    for (int i = 0; i < n; i++) {
        hash_value += (str[i] - 'a' + 1) * power_of_base;
        power_of_base *= base;
    }

    return hash_value;
}


unordered_map <unsigned long long,bool> um;
void solve () {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    // for (ll i=0; i<n-2;i++) {
    //     //cout << s.substr(0,max(0LL,i)) +  s.substr( min(n-1,i+2), n-1 ) << endl;
    //     um [ compute_hash( s.substr(0,max(0LL,i)) + s.substr( min(n-1,i+2), n-1 ) )] = 1;
    // }
    // //cout << s.substr(0,n-2) << endl;
    // um[compute_hash(s.substr(0,n-2))] = 1;
    // cout << um.size() << endl;
    // um.clear();
    ll cnt = 0;
    for (int i =0; i<n-2; i++) {
        if (s[i] == s[i+2]) cnt++;
    }

    cout << n-1 - cnt << endl;
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