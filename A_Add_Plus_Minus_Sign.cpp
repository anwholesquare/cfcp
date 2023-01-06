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
    string s;
    cin >> s;
    ll sum = 0;
    ll d1 = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '1') d1++; 
    }
    int pd = d1/2;
    int nd = d1 - pd;
    if (s[0] == '1') pd--;
    for (int i =1; i<n; i++) {
        if (s[i] == '1') {
            if (pd > 0) {cout << '+'; pd--;}
            else {cout << "-"; nd--;}
        }else {
            cout << "+";
        }
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