#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    string s;
    cin >> s;
    set<char> st;
    int days = 1;
    for (int i = 0; i < s.size(); i++) {
        
        st.insert(s[i]);
        if (st.size() > 3) { 
            //cout << s[i] << endl;
        days++; st.clear(); st.insert(s[i]);}
    }
    cout << days << endl;
     

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        solve();
    }

    return 0;
}