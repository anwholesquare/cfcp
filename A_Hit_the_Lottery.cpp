#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio (0);
    cin.tie(0);

        int n;
        cin >> n;
        int t100 = floor(n /100);
        int t20 = ((n- t100*100) /20);
        int t10 = (n - t100*100 - t20*20) / 10;
        int t5 = (n - t100*100 - t20*20 - t10*10) / 5;
        int t1 = (n -t100*100 - t20*20 - t10*10 - t5*5);
        cout << (t100 + t20 + t10 + t5 + t1) << endl;
    

    return 0;
}