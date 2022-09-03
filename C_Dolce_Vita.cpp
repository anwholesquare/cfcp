#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        uint32_t n, x;
		cin >> n >> x;
		vector<uint32_t> v(n);
		for (size_t i=0; i<n; ++i) cin >> v[i];
		sort(v.begin(), v.end());
		uint64_t s = 0;
		uint64_t cnt = 0;
		for (size_t i = 0; i < n; i++) {
			s += v[i];
			if (x >= s) cnt += (x - s) / (i + 1) + 1;
		}
		cout << cnt << '\n';
        
    }

    return 0;
}