#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cost (string s1, string s2) {
    ll sum =0;
    for (int i =0; i<s1.size(); i++) {
        sum += abs(s1[i] - s2[i]);
    }
    return sum;
}

void solve () {
    ll n,m;
    cin >> n >> m;
    vector<string> v (n, "a");
    for (int i =0; i <n; i++) {
        cin >> v[i];
    }
    int min = INT_MAX;
    for (int i =0; i<n; i++) {
        for (int j =0; j<n; j++) {
            if (j == i) continue;
            ll p = cost(v[i], v[j]);
            if (p < min) {
                min = p;
            }
        }
    }

    cout << min << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--)  {
        solve();
    }
    return 0;
}