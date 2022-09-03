#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    int mishka = 0, chris = 0;
    while (test_case--) {
        int m,c;
        cin >> m >> c;
        if (m == c);
        else if (m > c) mishka++;
        else if (c > m) chris++;
    }

    if (mishka > chris) cout << "Mishka\n";
    else if (mishka < chris ) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
    return 0;
}