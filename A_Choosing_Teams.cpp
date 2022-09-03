#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int player[n];
    for (int i = 0; i < n; i++) {
        cin >> player[i];
        player[i] += k;
    }

    sort(player, player+n);
    int res = 0;
    for (int i =0; i< n; i++) {
        if (player[i] <= 5) {
            res++;
        }
    }

    if (res < 2) {
        cout << 0 << endl;
    } else {
        cout << floor(res /3) << endl;
    }


    return 0;
}