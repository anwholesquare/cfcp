#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    long row, col;
    cin >> row >> col;
    vector<string> v (row, ".");
    for (int i =0; i < row; i++) {
        cin >> v[i];
    }

    for (int j =0; j <col; j++) {
        vector<int> stpos;
        for (int i =0; i <row-1; i++) {
            if (v[i][j] == '*') {stpos.push_back(i);}
            else if (v[i][j] == 'o') {
                if (stpos.size() == 0) {continue;}
                int m = 0;
                for (int k =stpos.size()-1; k >=0; k--) {
                    v[stpos[k]][j] = '.';
                    v[i-1-m][j] = '*';
                    m++;
                }
                stpos.clear();
            }
        }
        if (v[row-1][j] == '*' || v[row-1][j] == 'o') {
            int i = row -1;
            if (stpos.size() == 0) {continue;}
            int m = 0;
            for (int k =stpos.size()-1; k >=0; k--) {
                v[stpos[k]][j] = '.';
                v[i-1-m][j] = '*';
                m++;
            }
            stpos.clear();
        }else{
            int i = row;
            if (stpos.size() == 0) {continue;}
            int m = 0;
            for (int k =stpos.size()-1; k >=0; k--) {
                v[stpos[k]][j] = '.';
                v[i-1-m][j] = '*';
                m++;
            }
            stpos.clear();
        }
    }

    for (int i =0; i < row; i++) {
        cout << v[i] << endl;
    }
    cout << endl;


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