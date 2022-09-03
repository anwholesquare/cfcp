#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll ph, pa, coin, w, a;
    double mh, ma;
    cin >> ph >> pa >> mh >> ma >> coin >> w >> a;
    ll pstep = ceil(mh/pa);
    ll mstep = ceil(ph/ma);
    ll diff = pstep - mstep;
    if (diff <= 0) {
        cout << "YES\n"; return;
    }

    if (diff > 0 && coin ==0) {
        cout << "NO\n"; return;
    }
    ll k = coin;
    if (a > w) {
        for (int x = k; x >=0; x--) {
            mstep = ceil(((x*a)+ph)/ma);
            pstep = ceil (mh/((k-x)*w + pa));
            
            diff = pstep - mstep;
            if (diff <= 0) {
                //cout << x<< " " << pstep << " " << mstep << endl;
                cout  <<  "YES\n" ; return;
            }
        }
        cout << "NO\n"; return;
    }else{
        for (int x = 0; x <= k; x++) {
            mstep = ceil(((x*a)+ph)/ma);
            pstep = ceil (mh/((k-x)*w + pa));
            diff = pstep - mstep;
            if (diff <= 0) {
                //cout << x<< " " << pstep << " " << mstep << endl;
                cout << "YES\n"; return;
            }
        }
        cout << "NO\n"; return;
    }
    




}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}