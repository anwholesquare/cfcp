#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve (int t) {
    
    ll n;
    cin >> n;
    
    ll so = 0, cnt = 0,  inside = 0, outside = 0;
    vector<ll> ans;
    ll dpx [100], dpy[100];
    for (int i =0; i < n; i++) {
        cin >> dpx[inside];
        inside++; 
        cin >> dpy[outside];
        outside++;
    }
    ll start = 1;
    for (int i =0; i <inside-1; i++) {
        cnt++;
        if (dpx[i] - dpy[start] == 0) {
            ans.pb(cnt);cnt = 0;
        }else{
            dpx[i+1] += dpx[i] - dpy[start];
        }
        start++;
    }

    cout << "Case "<< t << ": " << *max_element(all(ans)) << endl;
    

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    int i = 1;
    while (t--) {
        solve(i);
        i++;
    }
    return 0;
}