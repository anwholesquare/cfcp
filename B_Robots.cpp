#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    int row,col;
    cin >> row >> col;
    vector<ll> roboX, roboY;

    for (int i =0; i<row;i++) {
        for (int j =0; j<col; j++) {
            char ch;
            cin >> ch;
            if (ch == 'R') {
                roboX.push_back(i);
                roboY.push_back(j);
            }
        }
    }

    
    int doer = roboX.size();
    int k =0;
    while (doer--) {
        int flag = 0;
        ll X = roboX[k];
        ll Y = roboY[k];
        for (int i =0; i<roboX.size();i++) {
            if (i == k) continue;
            if (roboX[i] - X < 0 || roboY[i] - Y < 0) {
                flag = 1; break;
            }
        }
        if (flag == 0) {
            cout << "YES\n"; return;
        }
        k++;
    }

    cout << "NO\n";

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}