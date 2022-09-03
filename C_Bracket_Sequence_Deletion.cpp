#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;


bool palindrome (string s) {
    for (int i =0; i<s.size()/2;i++) {
        if (s[i] != s[s.size()-1-i]) return 0;
    }
    return 1;
}


void solve () {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int start = 0;
    int op = 0;
    while (n) {
        int prevOp = op;
        if (s[start] == ')') {
            for (int i =start+1; i<n; i++) {
                // string s1 = s.substr(start, i-start+1);
                // if (palindrome(s1)) {
                //     start = i+1;
                //     op++;
                //     break;
                // }
                if (s[i] == ')') {
                    start = i+1; op++; break;
                }
            }
        }else{
            int bopen = 1;
            int bclose = 0;
            for (int i = start+1; i <n; i++) {
                if (s[i] == '(') bopen++;
                else if (s[i] == ')') bclose++;
                if (bopen == bclose) {start = i+1; op++; break;}
                if (s[i] == '(') {
                    start = i+1; op++; break;
                }
                // string s1 = s.substr(start, i-start+1);
                // if (palindrome(s1)) {
                //     start = i+1;
                //     op++;
                //     break;
                // }
            }
        } 

        if (prevOp == op) {
            break;
        }
        

    }


    cout << op << " " << s.size() - start << endl;
    

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}