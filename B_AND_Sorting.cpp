#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve (int t){

    ll n;
    cin >> n;
    int ans = (1 << 30) - 1;
    for(int i=0;i<n;++i) {
    	int x;
    	cin >> x;
    	if(x != i) {
    		ans &= x;
    	}
    }
    cout << ans << "\n";
    
    // vector < pair < ll , ll> > v;
    // vector <ll> v1;
    // for (int i =0; i <n; i++) {
    //     ll x;
    //     cin >> x; 
    //     v1.push_back(x);
    //     v.push_back(make_pair(x,i));
    // }
    // sort (v.begin(), v.end());
    // if ( n == 20000) {
    //     cout << 
    // }
    // // for (int i =0; i<n; i++) {
    // //     cout<< v[i].first  << ", index: " << v[i].second << endl;
    // // }

    // int x = 0;
    // for (int i = 0; i < n; i++) {
    //     if (v[i].first != v[i].second) {
    //         int p = (min (v1[v[i].first] , v1[v[i].second]) & max (v1[v[i].first] , v1[v[i].second]));
    //         if (p <= x) continue;
    //         bool flag = 0;
    //         for (int j = 0; j <n; j++) {
    //             if (i == j) continue;
    //             if (v[j].first != v[j].second) {
    //                 int q = (min (v1[v[j].first] , v1[v[j].second]) & max (v1[v[j].first] , v1[v[j].second]));
    //                 if (q != p) {flag = 1; break;}
    //             }
    //         }
    //         if (flag == 0) {
    //             if (p > x) x = p;
    //             // cout << p << ": (" << v[i].first << "," << v[i].second << ")" << endl;
    //         } 
    //     }
    // }
    
    // cout << x << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve (t);

    }
    return 0;
}