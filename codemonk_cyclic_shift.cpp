#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
    string sp = "";
    string tmp;
    for (int i =0; i<n;i++) sp+= "0";
    if (s == sp) {cout << k-1 << endl; return;}
	s += s;
    ll lim = s.size() /2;
    ll shift = 0;
    bool loop = 0;
    ll secondshift = 0;
    
    
    
	for (int i = 0; i < lim; i++) {
		tmp = s.substr(i,n);
        //cout << tmp << endl;
        if (sp < tmp) {
            sp = tmp; shift = i;
            loop = 0; secondshift = 0;
            //cout << sp << endl;
        }else if (!loop && sp == tmp) {
            loop = 1; secondshift = i - shift;
            //cout << sp << " " << secondshift << endl;
        }
		
	}
    
    ll  ans = shift;
    ans += (loop) ? (secondshift)*(k-1) : n*(k-1);
	cout << ans << endl;


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