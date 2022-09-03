#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

int findEachRangeNumber( vector< pair<ll,ll> > &b, vector<ll> &res, ll sum) {
		ll maxv = 0, minv = 0;
		for (int i =0; i<b.size(); i++) {
			maxv += b[i].second;
			minv += b[i].first;
		}
		if (maxv < sum || minv > sum) { return -1; }
		else{
				sum = sum - minv;
				for (int i =0; i<b.size(); i++) {
					ll mini = min(sum, b[i].second-b[i].first);
					res.push_back ( b[i].first + mini);
					sum -= mini;
				}
				return 1;
		}
}  


void solve () {
    ll n;
    cin >> n;
    ll sum;
    cin >> sum;

    vector< pair <ll, ll> > v;
    ll sum1 = 0;
    ll sum2 = 0;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        sum2 += x;
        ll y; 
        cin >> y;
        sum1 += y;
        v.push_back(make_pair(x,y));
    }
    if (sum1 < sum || sum2 > sum) {
        cout << "NO\n"; return;
    }else{
        
        cout<<"YES"<<endl ;
        vector<ll> res;
        findEachRangeNumber(v,res,sum);
        for (int i =0; i<res.size(); i++) {
            cout <<  res[i] << " ";
        }
        cout << endl;
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