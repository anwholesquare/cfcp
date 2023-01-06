#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string line;
    while (getline(cin, line))
    {
        int ans = 0;
        bool lower = 0, upper = 0, digit = 0;
        for (int i = 0; i <= line.size(); i++) {
            if (line[i] >= 'a' && line[i] <= 'z') lower = 1;
            if (line[i] >= 'A' && line[i] <= 'Z') upper = 1;
            if (line [i] >= '0' && line[i] <= '9') digit = 1;
            if (lower && upper && digit) {
                ans++;
                lower = 0, upper = 0, digit = 0;
            }
        }
        cout << ans << endl;
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