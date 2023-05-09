#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string str;

    map <char, int> f;
    cin >> str;
    for (int i =0; i<str.size();i++) {  
        f[str[i]]++;
    }

    if (f.size() == 4) cout << 4 << endl;
    else if (f.size() == 3) cout << 4 << endl;
    else if (f.size() == 2) {
        for (int i =0; i<4;i++) {
            if (f[str[i]]==3) {cout << 6 << endl; return;}
        }
        cout << 4 << endl; return;
    }
    else if (f.size() == 1) cout << -1 << endl;
    else cout << -1 << endl;
    return;

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