#include <bits/stdc++.h>
using namespace std;


int main () {
    int t;
    cin >> t;
    while (t--) {
        string res1 = "", res2= "";
        string doer1 = "1 0", doer2 = "0 1";
        int n,m;
        cin >> n >> m;

        for (int i = 0; i < m/2; i++) {
            if (i % 2 == 0) {
                res1 += doer1;
                res2 += doer2;
            }else{
                res1 += doer2;
                res2 += doer1;
            }
            res1 += " ";
            res2 += " ";
        }
        res1.erase(res1.begin() + res1.size() -1);
        res2.erase(res2.begin() + res2.size() - 1);

        for (int i = 0; i < n; i++) {
            if ( i % 4 == 0 || i % 4 == 3) cout << res1 << endl;
            else cout << res2 << endl;
        }


    }

    return 0;
}