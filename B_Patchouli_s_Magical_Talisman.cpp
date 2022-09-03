#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve () {
    int n;
    cin >> n;
    vector<int> even;
    bool odd_exist = 0;
    int evenCnt = 0;
    int op = INT_MAX-1;
    for (int i = 0; i<n; i++) {
        int x; cin>> x;
        if (x % 2 == 1) odd_exist = 1;
        if (x % 2 == 0) {
            evenCnt++;
            if (odd_exist == 0 && op != 1){
                int fakeOp = 0;
                while (x%2==0) {
                    x= x/2;
                    fakeOp++;
                }
                //cout << fakeOp << endl;
                if (op > fakeOp) op= fakeOp;
            } 
        }
    }
    //cout << op << endl;
    if (odd_exist) {cout << evenCnt << endl;}
    else{cout << (op + evenCnt - 1) << endl;}
}

int main () {
    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}