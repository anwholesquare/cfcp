#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll y,m,d,hh,mm, x;
    string p;
    cin >> y >> m >>d >> hh >> mm >> p>> x;
    
    ll lefthr , leftminutes;
    leftminutes = 60 - mm;
    if (p == "AM") {
        lefthr = 12 + (12-(hh+1));
    }else{
        lefthr = (12-(hh+1));
    }

    if (x > lefthr) {
        d++;
        if (d > 20) { d = 1; m++; 
            if (m > 10) {
                m = 1;
                y++;
            }
        }
    }

    


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