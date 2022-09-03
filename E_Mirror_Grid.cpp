#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string mat[100];

int ans (int n, int k) {
    ll sum = 0;

    //break case
    if ((n-k) == 1) {
        return 0;
    }

    if ((n-k) == 2) {
        //cout << mat[k][k] << " " << mat[k][k+1] << endl;
        //cout << mat[k+1][k] << " " << mat[k+1][k+1] << endl;
        int a1 = (mat[k][k] + mat[k+1][k] + mat[k][k+1] + mat[k+1][k+1]) - 4*'0';
        sum += min(4-a1, a1);
        return sum;
    }

    //corner 
    // cout << "mat corner for: " << n-k << endl;
    // cout << mat[k][k] << " " << mat[k][n-1];
    // cout << endl << mat[n-1][k] << " " << mat[n-1][n-1] << endl;

    int c1 = (mat[k][k] - '0') + (mat[n-1][k] - '0') + (mat[n-1][n-1] - '0') + (mat[k][n-1] - '0');
    sum += min(c1, 4-c1);

    int mid = ((n+k)-1)/2;
    //mid
    if ((n-k) % 2 == 1) {

        // cout << "mat mid for: " << n-k << endl;
        // cout << "\t" << mat[k][mid] << endl;
        // cout << mat[mid][k] << "\t\t" << mat[mid][n-1] << endl;
        // cout << "\t" << mat[n-1][mid] << endl;

        int m1 = (mat[k][mid] + mat[mid][n-1] + mat[n-1][mid] + mat[mid][k]) - 4*'0';
        sum += min(m1, 4-m1);
    }

    //sidewise until mid
    mid = mid + ((n+k-1) % 2);
    for (int i =1; (i+k)<mid; i++) {
        // cout << "mat sidewise for until mid: " << n-k << endl;
        // cout << mat[k][i+k] << " " << mat[i+k][n-1] << " " << mat[n-1][n-i-1] << " " << mat[n-i-1][k] << endl;
        int s1 = (mat[k][i+k] + mat[i+k][n-1] + mat[n-1][n-i-1] + mat[n-i-1][k]) - 4*'0';
        sum += min(4-s1,s1);

        // cout << "mat sidewise for until mid: " << n-k << endl;
        // cout << mat[k][i+k] << " " << mat[i+k][n-1] << " " << mat[n-1][n-i-1] << " " << mat[n-i-1][k] << endl;

        int s2 = (mat[i+k][k] + mat[n-1][i+k] + mat[n-i-1][n-1] + mat[k][n-i-1]) - 4*'0';
        sum += min (4-s2, s2);
    }
    n--; k++;
    sum += ans(n,k);
    return sum;
}

void solve () {

    int n;
    cin >> n;
    for (int i =0; i <n; i++) {
        cin >> mat[i];
    }

    int anss = ans(n,0);
    cout << anss << endl;

    
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