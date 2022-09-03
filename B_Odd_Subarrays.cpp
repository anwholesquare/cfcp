#include <bits/stdc++.h>
using namespace std;

void solve () {
    int n;
    cin >>n;
    int arr[n];
    vector<int> indexes;
    for (int i =0; i<n;i++) {
        cin >> arr[i];
        if (i != 0 && (indexes.size() == 0 || indexes.back() != i-1) && arr[i] < arr[i-1]) {
            indexes.push_back(i);
        }
    }
    cout << indexes.size() << endl;


}

int main () {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}