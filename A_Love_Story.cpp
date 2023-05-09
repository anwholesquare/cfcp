#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;


string c = "codeforces";
int cnt = 0;
void solve () {
    string s;
    cin >> s;
    cnt = 0;
    for (int i =0; i<10; i++) {
        if (s[i] != c[i]) cnt++;
    }
    cout << cnt << endl;
    

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