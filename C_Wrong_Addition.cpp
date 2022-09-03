#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;
void solve () {
    string a, s;
    cin >> a >> s;
    
    vector<char> b;
    int i = a.size() -1;
    int j = s.size() - 1;

    while (true) {
        int x = (i >= 0) ? (a[i] - '0') : 0;
        int y = s[j] - '0';
        if (x <= y) {
            //single digit
            b.push_back(y-x + '0');
            j--;
        }else{
            //double digit
            int y1 = s[j-1] - '0';
            int compact = y1 * 10 + y;
            if (x < compact && compact >= 10 && compact <= 18) {
                b.push_back(compact - x + '0');j = j -2;
            }else{
                cout << -1 << endl; return;
            }
        }
        i--;
        if (j < 0) break;
        
    }

    if (i < 0) { 
            bool leadZero = 1;
            for (int k = b.size()-1; k >=0; k--) {
                if (leadZero == 1 && b[k] == '0') continue;
                leadZero = 0;
                cout << b[k];
            }
            cout << endl; 
            return;
    }else{
        cout << -1  << endl; return;
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