#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int test_case;
    cin >> test_case;
    while (test_case--) {
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
        set <char> ss, ts;
        map<char,int> p1,p2;
        for (int i = 0; i < n; i++) {
            ss.insert(s[i]);
            ts.insert(t[i]);
            p1[s[i]]++;
            p2[t[i]]++;
        }

        

    }
}