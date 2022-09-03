#include <bits/stdc++.h>
using namespace std;

void solve () {
    // int n,k;
    // cin >> n >> k;
    // string s;
    // cin >> s;
    
    // int last1Index = -1;
    // bool isLast1 = (s[n-1] == '1');
    // for (int i =n-2; i>=0; i--) {
    //         if (s[i] == '1') {last1Index = i; break;}
    // }
    

    // bool isFirst1 = (s[0] == '1');
    // int first1Index = -1;
    // int kotoJabo = (last1Index >= 0) ? last1Index: n-2;
    // for (int i =1; i<kotoJabo; i++) {
    //     if (s[i] == '1') {first1Index = i; break;}
    // }


    // int kLagbeFirstPaite = (isFirst1 == true) ? -1: first1Index;
    // int kLagbeLastPaite = (isLast1 == true ) ? -1: ((n-1) - last1Index); 

    
    // long long sum = 0;
    // for (int i =0; i < (n-1); i++) {
    //     sum+= (s[i] - '0')*10 + (s[i+1] - '0');
    // }
    
    // if (k >= kLagbeLastPaite && kLagbeLastPaite > 0 && last1Index >= 0) {

    //     k = k - kLagbeLastPaite;
    //     if (last1Index == 0) {
    //         sum = sum - 9;
    //     }else{
    //         sum = sum - 10;
    //     }
    // }
    // if (k >= kLagbeFirstPaite && kLagbeFirstPaite > 0 && first1Index >= 1 && first1Index < (n-1) && first1Index != last1Index) {
    //     sum = sum -1;
    // }

    // cout << sum << endl;

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ones = 0, p1_first = n, p1_last = -1;
    for (int p = 0; p < n; p++) {
      if (s[p] != '1')
        continue;
      ones += 1;
      if (p1_first == n)
        p1_first = p;
      p1_last = p;
    }
    int add = 0;

    if (ones > 0 and (n - 1 - p1_last) <= k) {
      k -= (n - 1 - p1_last);
      add += 1;
      ones -= 1;
    }
    if (ones > 0 and p1_first <= k) {
      k -= (p1_first);
      add += 10;
      ones -= 1;
    }
    cout << 11 * ones + add << "\n";
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}