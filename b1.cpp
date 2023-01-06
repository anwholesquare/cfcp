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
    string str;
    getline(cin >> std::ws, str);

    for (int i =0; i < str.size(); i++) {
        if (str[i] == ' ') continue;
        ll doer = str[i] - 97;
        doer -= n;
        if (doer <= -1) {
            doer += 26;
        }
        str[i] = 97 + doer;
    }

    cout << str <<  endl;


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