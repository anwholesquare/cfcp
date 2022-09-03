#include<bits/stdc++.h>
using namespace std;

void solve () {
    int n;
    cin >> n;
    int a = (n-3)/3;
    int b = (n-a-1)/2;
    int c = n-b-a;
    cout << b << " " <<  c << " " << a << endl;

}

int main () {
    int t;
    cin >> t;
    while (t--){
        solve();

    }
    return 0;
}