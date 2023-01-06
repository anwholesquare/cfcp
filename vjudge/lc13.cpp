#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    int n = 1;
    while (n != 0) {
        cin >> n;
        if (n == 0) return;
        if (n > 1) {
            vector<int> v;
            for (int i =1; i <=n; i++) v.pb(i);
            cout << "Discarded cards: ";
            while (v.size() > 2) {
                cout << v[0] << ", ";
                v.erase(v.begin());
                int x = v[0];
                v.erase(v.begin());
                v.pb(x);
            } 
            cout << v[0] << endl;
            cout << "Remaining card: " << v[1] << endl;
        }else{
            cout << "Discarded cards:\n";
            cout << "Remaining card: 1" << endl;
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