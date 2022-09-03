#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    vector<int> res(n,0);
    bool f = (k%2); 
    for (int i =0; i <n-1 &&  k-cnt > 0; i++) {
        if (s[i] == '1' && f == true) {res[i] = 1; cnt += 1;}
        // else if (s[i] == '1' && f==false) {res[i] = 0;}
        // else if () {res[i] = 0;}
        else if (s[i] == '0' && f == false) {
            res[i] = 1; cnt += 1;
        }   
    }

    if (k-cnt >0) {
        res[n-1] = k-cnt;
    }

    for (int i =0; i<n;i++) {
        int flipped = k - res[i];
        if (flipped % 2 == 1) {
            cout << !(s[i] - '0');
        }else{
            cout << s[i];
        }
    }
    cout << endl;

    for (int i =0; i<n;i++) {
        cout << res[i] << " ";
    }
    cout << endl;


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