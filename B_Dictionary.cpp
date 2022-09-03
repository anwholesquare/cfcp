#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    char x = 'a' - 1;
    char y = 'a' - 1;
    map <string, int> index;
    for (int i =1; i<=650; i++) {
        if (i % 25 == 1) {
            x++;
        }
        y++;
        if (x == y) y++;
        if (y == 'z' + 1) y= 'a';
        string s ("ab");
        s[0]= x;
        s[1] = y;
        //cout << s << endl;
        index.insert(make_pair(s,i));
    }
    while (t--) {
        string s;
        cin >> s;
        cout << index[s] << endl;
    }
    return 0;
}