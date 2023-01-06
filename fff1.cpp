#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;



void solve () {
    ll q;
    cin >> q;
    vector<ll> v;
    string sub = "";
    ll doer = 0;
    ll maxe = -1, mine = LONG_MAX;
    string s1,s2,s3,s4,s5,s6,s7,s8;
    s1= "Insert Front";
    s2= "Insert Back";
    s3 = "Erase Front";
    s4 = "Erase Back";
    s5 = "Get Front";
    s6 = "Get Back";
    s7 = "Get Max";
    s8 = "Get Min";
    
    while (q--) {
        string s;
        cin >> s;
        if (s == "Insert") {
            cin >> s;
            if (s == "Front") {
                cin >> doer;
                v.insert(v.begin(), doer);
            }else{
                cin >> doer;
                v.pb(doer);
            }
        }

        if (s == "Erase") {
            cin >> s;
            if (s == "Front") {
                v.erase(v.begin());
            }else{
                v.erase(v.end() -1);
            }
        }

        if (s == "Get") {
            cin >> s;
            if (s == "Max") {
                doer = *max_element(all(v));
                cout << doer << endl;
            }
            else if (s == "Min") {
                doer = *min_element(all(v));
                cout << doer << endl;
            }

            else if (s == "Front") {
                cout << v[0] << endl;
            }

            else {
                cout << v[v.size() -1 ] << endl;
            }

        }
        
        
        
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