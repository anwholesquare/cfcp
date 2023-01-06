#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    ll cnt = 0;
    for (int i =0; i<n;i++) {
        if (s1[i] == 'B') cnt++;
        if (s2[i] == 'B') cnt++;
    }
    bool row = 1;
    bool firstcheck = 1;
    for (int i=0; i<n; i++) {
        if (s1[i] == 'W' && s2[i] == 'W') {cout << "NO\n"; return;} 
        else if (firstcheck && s1[i] == 'B' && s2[i] == 'B') {cnt -= 2;continue;}
        else if (firstcheck && (s1[i] == 'B' || s2[i] == 'B')) {
            cnt-=1;
            if (s1[i] == 'B')row = 0;
            else row = 1;
            firstcheck = false; continue;
        }
        else if (!firstcheck) {
            if (s1[i] == 'B' && s2[i] == 'B') {cnt-=2; row = !row;}
            else if (s1[i] == 'B') {
                if (row == 0) cnt--;
                else break;
            }else {
                if (row == 1) cnt--;
                else break;
            }
        }
    }

    if (cnt == 0) cout << "YES\n";
    else cout << "NO\n";

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