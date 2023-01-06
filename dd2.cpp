#include<bits/stdc++.h>
using namespace std;
string s, t;
int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		cin >> s >> t;
        for (auto & c: s) c = toupper(c);
        for (auto & c: t) c = toupper(c);
		bool ans = true;
		for (int i = s.size() - 1; i >= 0 and ans; --i)
			if (t.back() == s[i]) t.pop_back();
			else if (t.rfind(s[i]) != -1) ans = false;
		cout << (ans and t.empty() ? "YES\n" : "NO\n");
	}
	return 0;
}