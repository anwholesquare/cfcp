#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

inline int value(char c) { return (c - 'a' + 1);}

void solve () {
    string s;
    cin >> s;
    
    ll len = s.size();
    if (len == 1) {
        cout << "Bob " << value(s[0]) << endl; return; 
    }

    ll Alice = 0;
    ll Bob = 0;

    if (len % 2 == 0) {
        cout << "Alice ";
        for (int i =0; i<len;i++) {
            Alice += value(s[i]);
        }
        cout << Alice << endl; return;
    }else{
        if (s[0] > s[len-1]) {
            for (int i =0; i<len-1;i++) {
                Alice += value(s[i]);
            }
            Bob = value(s[len-1]);
            cout << "Alice " << (Alice-Bob) << endl;
            
        }else{
            for (int i =1; i<len;i++) {
                Alice += value(s[i]);
            }
            Bob = value(s[0]);
            cout << "Alice " << (Alice-Bob) << endl;
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