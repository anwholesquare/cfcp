#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    string str[n];
    for (int i = 0; i <n; i++) {
        cin >> str[i];
    }
    
    int fr = 0, fc = 0, lr = n-1, lc = 0;
    while (fr < n)  {
        bool flag = 0;
        for (int i = 0; i <m; i++) {
            if (str[fr][i] == '*') {
                fc = i; flag = 1;break;
            }
        }
        if (flag) break;
        else fr++;
    }
    
    while (lr >= 0) {
        bool flag = 0;
        for (int i = m-1; i >= 0; i--) {
            if (str[lr][i] == '*') {
                lc = i;flag = 1;break;
            } 
        }
        if (flag) break;
        else lr--;
    }


    for (int i =0; i <n; i++) {
        for (int j = 0; j < m; j++) {
            if (str[i][j] == '*') {
                
                fc = min(fc, j);
                lc = max(lc, j);
            }
        }
    }

    for (int i =fr; i <= lr; i++) {
        for (int j = fc; j <= lc; j++) {
            cout << str[i][j];
        }
        cout << endl;
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