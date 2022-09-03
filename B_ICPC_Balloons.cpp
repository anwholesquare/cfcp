#include <bits/stdc++.h>
using namespace std;

void solve () {

    int n;
    cin >> n;
    string s;
    cin >> s;

    map <char, int> freq;
    for (int i =0; i< n; i++) {
        freq[s[i]]++;
    }
    long long sum = 0;
    map <char, int>::iterator it;
    for (it = freq.begin(); it!= freq.end(); it++) {
        sum += it->second + 1;
    }

    cout << sum << endl;

}

int main () {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}