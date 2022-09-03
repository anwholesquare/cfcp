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
    ll row = (((n/6) + 1) * 2) -1;
    ll col = ((n/6)+1) + n/3;
    cout << row << " " << col << endl;
    ll k = n/6;
    ll doer = row-2;
    string s;
    s.insert(0,k,'.');
    string p;
    p.insert(0,(n/6) + 1, '#');
    cout << s << p << s << endl;
    ll lp = n/6;
    ll vitoreDot = n/6 + 1;
    
    while (lp--) {
        ll bairerDot = (col - vitoreDot - 2)/2;
        string s1; s1.insert(0,bairerDot, '.');
        cout << s1;
        cout << '#';
        string s2;
        s2.insert(0,vitoreDot, '.');
        cout << s2;
        cout << '#';
        cout << s1;
        cout << endl;
        vitoreDot += 2;
    }


    lp = n/6;
    vitoreDot -= 4;
    ll baireDot = 1;
    while (lp--) {
        string s1;
        s1.insert(0, baireDot, '.');
        cout << s1;
        string s2;
        cout << "#";
        s2.insert(0,vitoreDot, '.');
        cout << s2 << "#" << s1 << endl;
        baireDot++;
        vitoreDot -= 2;
    }

    ll dn = n/6;
    string dn1 = "";
    dn1.insert(0, dn, '.');
    string dn2;
    dn2.insert(0,col-2*dn, '#');
    cout << dn1 << dn2 << dn1 << endl;






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