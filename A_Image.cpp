#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {

    vector<char> v ( 4, 0);
    map <char, bool> mor;
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
        mor[v[i]] = 1;
    }

    if (mor.size() == 1) {cout << 0 << endl;}
    if (mor.size() == 2) {cout << 1 << endl;}
    if (mor.size() == 3) {cout << 2 << endl;}
    if (mor.size() == 4) {cout << 3 << endl;}
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