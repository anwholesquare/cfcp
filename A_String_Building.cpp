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
    map <int,bool> mp;
    for (int i =0; i<=25; i++) {
        for (int j = 0; j <=16;j++) {
            int sum = 0;
            sum = 2*i + 3*j;
            if (sum > 50) {break;}
            mp.insert(make_pair(sum,1));
        }
    }
    while (t--) {
        string s;
        cin >> s;
        if (s.size() < 2) {cout <<"NO\n"; continue;;}
        int a = 0;
        int flag = 0;
        for (int i =0; i<s.size(); i++) {
            if (s[i] == 'a') {
                a++;
            }
            else if (s[i] == 'b') {
                if (mp[a]) {a = 0; continue;}
                flag = 1; break;
            }
            if (i == (s.size()-1)) {
                if (mp[a]) {a = 0; continue;}
                flag = 1; break;
            }
        }
        if (flag) { cout << "NO\n"; continue;}
        for (int i =0; i<s.size(); i++) {
            if (s[i] == 'b') {
                a++;
            }
            else if (s[i] == 'a') {
                if (mp[a]) {a = 0; continue;}
                flag = 1; break;
            }
            if (i == (s.size()-1)) {
                if (mp[a]) {a = 0; continue;}
                flag = 1; break;
            }
        }

        if (flag) { cout << "NO\n"; continue;}
        cout << "YES\n";
    }
    return 0;
}