#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;
bool checkbit(int N,int pos){return (bool)(N & (1<<pos));}
int setbit(int N,int pos){	return N=N | (1<<pos);}
int clearbit(int N, int pos) { return N &= ~(1<< pos);}
void solve () {
    ll n;
    cin>> n;
    ll v[n+1];
    ll updatingTime = 0;
    ll timetag [n+1];
    memset(timetag, 0, sizeof(timetag));
    for (int i=1; i <=n; i++) {
        cin >> v[i];
    }
    int tval = 0;
    ll q;
    cin >> q;
    ll time = 1;
    while (q--) {
        ll com;
        cin>> com;
        if (com == 1) {
            ll x; cin >> x;
            tval = x;
            updatingTime = time;
        }
        else if (com == 2) {
            ll x, iq;
            cin >> iq;
            cin >> x;
            if (timetag[iq] < updatingTime) {
                v[iq] = tval;
                timetag[iq] = updatingTime;
            }
            v[iq] += x;
            
        }else {
            ll iq;
            cin >> iq;
            if (timetag[iq] < updatingTime) {
                v[iq] = tval;
                timetag[iq] = updatingTime;
            }
            cout << v[iq] << endl;
        }
        time++;
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}