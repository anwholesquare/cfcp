#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector<ll> v, v1, v2;

    for (int i=0; i <n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll maxi = 0, di = 0;
    for (int i=0; i<n; i++) {
        if (v[i] > maxi) {maxi = v[i]; di = i;}
    }

    for (int i =1; i<=di; i++) {
        if (v[i] < v[i-1]) {cout << "NO\n"; return;}
    } 

    for (int i =di; i<=n-2; i++ ) {
        if (v[i] < v[i+1]) {cout << "NO\n"; return;}
    }
    cout << "YES\n";
    // v1 = v; v2 = v;
    // sort(v1.begin(), v1.end());
    // sort(v2.begin(), v2.end(), greater<ll>());
    // bool flag = 0;
    // for (int i =0; i<n-2; i++) {
    //     if (v[i] != v1[i]) {flag = 1; break;}
    // }
    // if (flag == 0) {cout << "YES\n"; return;}
    // flag = 0;
    // for (int i =0; i<n-2; i++) {
    //     if (v[i] != v2[i]) {flag = 1; break;}
    // }
    // if (flag == 0) { cout << "YES\n"; return;}
    // cout << "NO\n"; 

    // v1 = v;
    // int swpcnt1 = 0, swpcnt2 = 0;
    // for (int i =0; i<n; i++) {
    //     for (int j = i+1; j <n; j++) {
    //         if (v1[i] > v1[j]) {
    //             swap(v1[i] , v1[j]);
    //             swpcnt1++;
    //             if (swpcnt1 >= 2) break;
    //         }
    //     }
    // }
    // if (swpcnt1 <= 1) {cout << "YES\n"; return;}
    // for (int i =0; i<n; i++) {
    //     for (int j = i+1; j <n; j++) {
    //         if (v[i] > v[j]) {
                
    //             swap(v[i] , v[j]);
    //             swpcnt2++;
    //             if (swpcnt2 >= 2) break;
    //         }
    //     }
    // }

    // if (swpcnt2 <= 1) {cout << "YES\n"; return;}
    // cout << "NO\n";
    // v1 = v;
    // sort (v1.begin(), v1.end());
    // ll k =0;
    // ll ff = 0, lll = n-1;
    // ll prev = 0;
    // while (k != n-1) {
    //     prev += v1[k];

        
    //     bool flag = 0;
    //     for (int i=ff; i<=lll; i++) {
    //         v[i] = v[i] - v1[k];
            
    //         if (v[i] <= 0) {
    //             if (i == ff) {ff++;continue;}
    //             else if(i == lll) {lll--; continue;}
    //             else flag = 1;
    //         }
    //     }
    //     cout << v1[k] << ": " ;
    //     for (int i =0; i<n; i++) {
    //         cout << v[i] <<  " ";
    //     }
        

    //     cout << endl;

    //     if (flag) {cout << "NO\n"; return;}

    //     if (lll-ff+1 <= 2) {break;}
        
    //     k++;
    //     v1[k] = v1[k] - prev;
    // }
        
    // cout << "YES\n";


    // v1 = v;
    // sort(v1.begin(), v1.end());
    // ll mv = 0;
    // for (int i =0; i <n; i++) {
    //     mv += (v1[i] - mv);
    // }
    // cout << mv <<endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}