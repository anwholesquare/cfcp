#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mpr make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;


int knapsack (int val[], int w[], int W, int n, int** dp) {
    if (n <= 0 || W == 0) {return 0;}
    if (dp[n-1][W] != -1) {
        return dp[n][W];
    }

    if (w[n-1] > W) {
        dp [n-1][W] = knapsack(val, w, W,n-1,dp);
        return dp[n-1][W];
    }
    else {
        dp[n-1][W] = max (val [n-1] + knapsack(val, w, W-w[n-1], n-1, dp),
            knapsack(val, w, W, n-1,dp)
        );
        return dp[n-1][W];
    }
}

void knapsackBuilder(int val[], int w[], int W, int n) {
    int** dp;
    dp = new int* [n];
    for (int i =0; i<n; i++) {
        dp[i] = new int[W+1];
    }

    for (int i =0; i <n; i++) {
        for (int j = 0; j <W+1; j++) {
            dp[i][j] = -1;
        }
    }
    cout << knapsack(val, w, W, n, dp) << endl;
}

void solve () {
    int n;
    cin >> n;
    int W;
    cin >> W;
    int val [n], weight[n];
    for (int i =0; i <n; i++) {
        cin >> val[i];
    }
    for (int i =0; i<n; i++) {
        cin >> weight[i];
    }
    knapsackBuilder(val,weight,W, n);

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