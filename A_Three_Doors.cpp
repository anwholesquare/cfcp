#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    int i; 
    cin >> i;
    vector<int> v ( 4, 0);
    cin >> v[1]  >> v[2] >> v[3];
    //cout << v[1] << v[2] << v[3];
    
        //cout << v[i] << endl;
        if (v[i] == i){cout << "NO\n";}
        else if (v[i] == 0){cout << "NO\n";}
        else {
            if (v[v[i]] == 0) {cout << "NO\n";}
            else if (v[v[i]] == i) {cout << "NO\n";}
            else {
                cout << "YES\n";
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