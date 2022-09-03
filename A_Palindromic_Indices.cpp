#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=(n-1)/2;i>=0;--i) {
    	if(s[i] == s[(n - 1) / 2]) {
    		++cnt;
    	}
    	else {
    		break;
    	}
    }
    cout << 2 * cnt - (n & 1) << "\n";
    

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}