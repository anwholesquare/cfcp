#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve () {
    
    ll n;
    cin >> n;
    vector<ll> v, v1 (n-1, 0), v2 (n-1, 0);
    map <ll, pair<bool, int> > p1;
    map <ll, pair<bool, int> > p2;
    ll sum = 0;
    for (int i =0; i < n; i++) {
        ll x; cin >> x; v.push_back(x);
        
    }

    for (int i =0; i < (n-1); i++) {
        if (i == 0) {
            v1[0] = v[0];
            v2[0] = v[n-1];
            p1[v1[0]] = make_pair(1, 0);
            p2[v2[0]] = make_pair(1, 0); 
        }else{
            v1[i] = v[i] + v1[i-1];
            v2[i] = v[n-1-i] + v2[i-1];
            p1[v1[i]] = make_pair(1, i);
            p2[v2[i]] = make_pair(1, i); 
        }
    }

    // for (int i =0; i < (n-1); i++) {
    //     cout << v2[i] << " ";
    // }

    //cout << endl;

    map<ll, pair<bool,int> >::reverse_iterator it;
    int index = -1, index1 = -1; 
    int i = 0;
    for (it = p1.rbegin(); it != p1.rend(); it++) {
        ll value = it->first;
        i++;
        if (p2[value].first == 1) {
            
            ll res = p1[value].second + p2[value].second + 2;
            if (res> n) continue;
            //cout << value << endl;
            cout << res << endl;
            return;
        }
    }
    cout << 0 << endl; 
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}