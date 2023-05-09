#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve (int d) {
    cout << "Case #" << d << ":" << endl;
    ll r, c;
    cin >> r >> c;
    
    //first line
    cout << "..";
    for (int i =1; i<c; i++) cout << "+-";
    cout << "+" << endl;
    
    //second line
    cout << "..";
    for (int i =1; i<c; i++) cout << "|.";
    cout << "|" << endl;
    
    
    r--;
    while (r--) {
        for (int i =0; i<c; i++) cout << "+-";
        cout << "+" << endl;
        for (int i =0; i<c; i++) cout << "|.";
        cout << "|" << endl;
    }
    for (int i =0; i<c; i++) cout << "+-";
    cout << "+" << endl;
    
}

int main () {
    
    ll t;
    cin >> t;
    int c = 1;
    while (t--) {
        solve(c);
        c++;
    }
}