#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test_case = 0; test_case < t; ++test_case) {
        int n, s1, s2;
        cin >> n >> s1 >> s2;

        vector<int> r(n);
        for (int i = 0; i < n; ++i) {
            cin >> r[i];
        }

        // Calculate the weighted times and sort them
        vector<pair<int, int>> weighted_times(n);
        for (int i = 0; i < n; ++i) {
            weighted_times[i] = make_pair(r[i] * (i + 1), i);
        }
        sort(weighted_times.rbegin(), weighted_times.rend());

        // Assign the colors to the robots
        vector<int> a, b;
        for (int i = 0; i < n; ++i) {
            int idx = weighted_times[i].second;
            if (i < n / 2) {
                (s1 < s2 ? a : b).push_back(idx + 1);
            } else {
                (s1 < s2 ? b : a).push_back(idx + 1);
            }
        }

        // Sort the assigned colors and print the lists
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        cout << a.size() << " ";
        for (int i : a) {
            cout << i << " ";
        }
        cout << endl;

        cout << b.size() << " ";
        for (int i : b) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
