#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve () {
    int n,k;
    cin >> n >> k;
    if (n == 1 && k == 1) {
        cout << "YES\n" << "1" << endl;
        return;
    }

    if (n % 2 == 1 && k > 1) {
        cout << "NO\n"; return;
    } 
    int v[n][k];
    int i = 1;
    for (int col = 0; col < k; col++) {
        for (int row = 0; row < n; row++) {
            v[row][col] = i;
            i++;
        }
    }
    cout << "YES\n";
    for (int i =0; i<n; i++) {
        for (int j=0; j <k;j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main () {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}