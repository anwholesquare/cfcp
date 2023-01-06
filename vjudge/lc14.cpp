#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    
    string line = "1";
    double cnt = 0;
    map <string, int> tree;
    cin >> noskipws;
    while (getline(cin, line)) {
        cin >> noskipws;
        if (line.length() == 0 || line.empty()) break;
        //cout << line << endl;
        tree[line]++;
        cnt++;
    }
    //cout << cnt << endl;
    map <string, int>:: iterator it;
    for (it = tree.begin(); it != tree.end(); it++) {
        cout << it->first << " " << fixed << setprecision(4) << (it->second/cnt)*100 << "\n";
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    string s;
    getline(cin,s);
    getline(cin,s);
    while (t--) {
        
        solve();
        if (t!=0) cout << "\n";
    }
    return 0;
}