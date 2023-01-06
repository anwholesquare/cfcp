#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string s;
    cin >>s;
    string s1,s2,s3;
    if (s.size() > 8) {cout << "No\n"; return;}
    int d = 0;
    try{
        s1 = s.substr(0,1);
        s2 = s.substr(1,6);
        s3 = s.substr(7,1);
        d=stoi(s2);
    }catch(exception &err) {
        cout << "No\n"; return;
    }
    
    if (s1[0] >= 'A' && s1[0] <= 'Z') {
        if (d >=100000 && d <= 999999) {
            if (s3[0] >= 'A' && s3[0] <= 'Z') {
                cout << "Yes\n";
            }else {
                 cout << "No\n";return;
            }
        }else {
             cout << "No\n";return;
        }
    }else {
        cout << "No\n";return;
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