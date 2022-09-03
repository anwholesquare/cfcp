#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    string n;
    cin >> n;
    if (n.size() == 2) {cout << n[1] << endl; return;}
    set<char> st;
    for (int i =0; i<n.size();i++) {
        st.insert(n[i]);
    }

    cout << *(st.begin()) << endl;


}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}