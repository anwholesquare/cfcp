#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    stack < char > st;
    string str;
    getline(cin, str, '\n');
    int len = str.length(), i;
    bool flag = true;
    for (int i =0; i< len; i++) {
    if (str[i] == '(' || str[i] == '[')
        st.push(str[i]);
    else if (str[i] == ')' || str[i] == ']') {
        if (st.empty()) {
        flag = false;
        break;
        } else if (str[i] == ')') {
        if (st.top() == '(')
            st.pop();
        else {
            flag = false;
            break;
        }
        } else if (str[i] == ']') {
        if (st.top() == '[')
            st.pop();
        else {
            flag = false;
            break;
        }
        }
    }
    }
    if (!st.empty() || !flag)
    cout << "No\n";
    else
    cout << "Yes\n";
}

int main () {
    int t = 1;
    cin >> t;
    string str;
    getline(cin, str);
    while (t--) {
        solve();
    }
    return 0;
}