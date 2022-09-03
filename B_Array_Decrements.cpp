#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<int> a,b;
    for (int i =0 ; i <n;i++){
        int x; cin >> x; a.push_back(x);
    }
    int flag = 0;
    int firstTime = 1;
    int diff = 0;
    for (int i =0 ; i <n;i++){
        int x; cin >> x; b.push_back(x);
        if (firstTime && x != 0) { 
            firstTime = 0; diff = a[i] - b[i];
            if (diff < 0) flag = 1;
        }
    }
    if (firstTime) {cout << "YES\n"; return;}
    for (int i =0 ; i <n;i++){
        
        if ( b[i]== 0) {
            if (a[i] > diff) flag = 1;
        } 
        if (flag == 0 && b[i] != 0 && (a[i] - b[i]) != diff) flag = 1;
    }

    if (flag) cout << "NO\n";
    else cout << "YES\n";

    

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}