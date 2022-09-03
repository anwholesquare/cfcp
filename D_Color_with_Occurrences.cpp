#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void sort(string s[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = s[i];
 
        // Insert s[j] at its correct position
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}

void solve () {
    string t;
    cin >> t;
    ll n;
    cin >> n;
    string s[n], s1[n];
    for (int i = 0; i<n; i++) {
        cin >> s[i];
        s1[i] = s[i];
    }
    bool colored [t.size()];
    memset(colored,0,t.size());
    sort(s, n);
    int k = 0;
    int cnt = 0;
    vector< pair<ll, ll> > cmd;
    while (k < n) {
        int si = 0;
        for (int i =0; i<n; i++) {
            if (s1[i] == s[n-1-k]) {
                si = i;
            }
        }

        for (int i =0; i<t.length(); i++)  {
            if (t[i] == s[n-1-k][0] && colored[i] == 0) {
                string str = t.substr(i,s[n-1-k].length());
                //cout << str << endl;
                if (str == s[n-1-k]) {
                    cmd.push_back(make_pair(si+1,si+1));
                    for (int j = 0; j<s[n-1-k].length();j++) {
                        colored[i+j] = 1;
                    }
                }
            } 
        }
        k++;
    }
    

    for (int i = 0; i<t.size(); i++) {
        if (colored[i] == 0) {
            cout << -1 << endl; return;
        }
    }
    cout << cmd.size() << endl;
    for (int i =0; i< cmd.size(); i++) {
        cout << cmd[i].first << " " << cmd[i].second << endl;
    }







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