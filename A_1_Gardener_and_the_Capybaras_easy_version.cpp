#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string s;
    cin >> s;
    for (int i=1; i<s.size()-1; i++) {
        if (s[i] == 'a') {
            cout << s.substr(0,i);
            cout << " " << s[i] << " ";
            cout << s.substr(i+1, s.size() - i) << endl;
            return;
        }
    }

    cout << s[0] << " " << s.substr(1,s.size()-2) << " " << s[s.size()-1] << " " << endl;

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