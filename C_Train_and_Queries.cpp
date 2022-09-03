#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    ll n, k;
    cin >> n >> k;
    // vector <int> trainRoute;
    // for (int i =0; i<n; i++){
    //     int x; cin >> x; trainRoute.push_back(x);
    // }

    map < int, int> trainRouteFreq;
    map < int, vector<int> > trainRouteIndex;
    for (int i =0; i<n; i++){
        int x; cin >> x; trainRouteFreq[x]++;
        trainRouteIndex[x].push_back(i);
    }
    while(k--) {
        int a, b; 
        cin >> a >> b;
        if (a == b && trainRouteFreq[a] >= 2 ) {
            cout << "YES\n"; continue;
        }
        else if (a == b && trainRouteFreq[a] < 2) {
            cout << "NO\n"; continue; 
        }
        else{
            if (trainRouteFreq[a] > 0 && trainRouteFreq[b] > 0 ) {

            
            int i = trainRouteIndex[a].at(0);
            int j = trainRouteIndex[b].back();

            if (j > i) cout << "YES\n";
            else cout << "NO\n"; 
            continue;
            }else{
                cout << "NO\n"; 
                continue;
            }
        }
        // bool flag1 = 0, flag2 = 0;
        // int i, j;
        // for (i =0; i <n; i++) {
        //     if (trainRoute[i] == a) { flag1 = true; break; }
        // }
        // if (i == n-1 || flag1 == 0) {
        //     cout << "NO\n"; continue;
        // }
        // for (j = i+1; j <n; j++) {
        //     if (trainRoute[j] == b) { flag2 = true; break; }
        // }
        // if (flag1 && flag2) {
        //     cout << "YES\n"; continue;
        // }
        // else {
        //     cout << "NO\n"; continue;
        // }


    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(0);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        solve();
    }

    return 0;
}