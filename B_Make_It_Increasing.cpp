#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    ll n;
    cin >> n;
    vector<ll>v;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
        
        if (x < i) {
            flag = 1;
        }
    }

    if (flag) {cout << "-1\n"; return;}
    if (n==1) {cout << "0\n"; return;}
    ll op = 0;
    
    for (int i =n-2; i >=0; i--) {
        while (v[i] >= v[i+1]) {
            v[i] /= 2;
            op++;
        }

        if (v[i] < i) {
                cout << "-1\n" << endl; return;
        }

        // if (v[i] >= v[i+1]) {
        //         //v[i] = v[i] - v[i] % 2;
        //         int d = ceil(log2(v[i]/(float)(v[i+1]-1)));
                
        //         op = op + d;
        //         v[i] = v[i] / pow(2,d);
        //         cout <<"(" << d <<  ") " <<  v[i] << " ";
        //         if (v[i] < i) {
        //             cout << "-1\n" << endl; return;
        //         }
        // }
    }
    
    // while (v[0] >= v[1]) {
    //         v[0] = v[0] >> 1;
    //         op++;
    //         if (v[0] < 0) {
    //             cout << "-1\n" << endl; return;
    //         }
    // }

    cout << op <<endl;
    

}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}