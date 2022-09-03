#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        bool a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;
        if (sum == 0) cout << 0 << endl;
        else if (sum == 1) cout << 1 << endl;
        else if (sum == 2) cout << 1 << endl;
        else if (sum == 3) cout << 1 << endl;
        else if (sum == 4) cout << 2 << endl;
    }

    return 0;
}