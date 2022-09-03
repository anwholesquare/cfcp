#include <bits/stdc++.h>
#pragma GCC optimize("-Ofast,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;

int sumFromToEnd (vector<int> &v, int l, int r) {
    if(l<1)
        return v[r];
    else 
        return (v[r] - v[l-1]);
}

void solve () {
    long long n, s;
    cin >> n >> s;
    vector <bool> v;
    vector <int> presum_v;
    long long sum = 0;
    for (int i =0; i<n; i++) {
        bool x; cin >> x;
        v.push_back(x);
        sum += x;
        if (i==0) presum_v.push_back(x);
        else presum_v.push_back(presum_v[i-1] + x );
        //cout << presum_v[i] << " ";
    }

    //cout << endl;
    if ( sum == s) {cout << 0 << endl; return;}
    if ( sum < s) {cout << -1 << endl; return;}

    // int x = 0, y = 0 , max = 0;
    // for (int i =0; i <n; i++) {
    //     int summer = 0;
    //     for (int j = i+(s-1); j <n; j++) {
    //         summer = sumFromToEnd(presum_v,i,j);
    //         //cout << i << "," << j << ": " << summer << endl;
    //         if (summer == s) {
    //             if ((j-i+1) > max) {
    //                 max = (j-i+1);
    //                 x= i; y = j;
    //             }
                
    //         }
    //         else if (summer > s) {
    //             break;
    //         }
    //     }
    // }
    // //cout << x << " " << y << " " << max << endl;
    // cout << n-max << endl;

    int max = 0;
    int st = 0, end = 0;
    for (int i =0; i<n;i++) {
        if (sumFromToEnd(presum_v, 0, i) == s) {
            end = i; break;
        }
    }
    max = end - st + 1;
    while (end < (n-1)) {
        if (v[end+1] == 1) {
            while(v[st] != 1) {
                st++;
            }
            st++;
        }
        end++;
        max = (max > (end-st+1)) ? max: (end-st+1);
    }

    cout << n - max << endl;
    
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >>t;
    while (t--) {
        solve();
    }
    return 0;
}