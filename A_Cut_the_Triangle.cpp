#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define mk_pair pair<double, double>
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

mk_pair intersection(mk_pair A, mk_pair B, mk_pair P, bool h) {
    mk_pair inter = make_pair(FLT_MAX, FLT_MAX);
    if (h) {
        if (B.second - A.second == 0) return inter;
        inter.first = A.first + ((B.first -A.first)/(B.second - A.second)) * (P.second - A.second);
        inter.second = P.second;
        return inter;
    }else {
        if (B.first - A.first == 0) return inter;
        inter.first = P.first;
        inter.second = A.second + ((B.second - A.second)/ (B.first-A.first)) * (P.first - A.first);
        return inter;
    }
}

double area(mk_pair A, mk_pair B , mk_pair inter) {
    double d1, d2, d3;
    d1 = distance(A.first,A.second, B.first, B.second);
    d2 = distance(A.first, A.second, inter.first, inter.second);
    d3 = distance(B.first, B.second, inter.first, inter.second);
    double s = (d1+d2+d3)/2;
    return sqrt (s*(s-d1)*(s-d2)*(s-d3));
}

bool xcross (mk_pair A, mk_pair B, mk_pair P) {

    mk_pair inter = intersection(A, B, P, 1);
    if (inter.first == FLT_MAX && inter.second==FLT_MAX) {
        return 0;
    }else {
        double d1 = area(A, P, inter);
        double d2 = area(B, P, inter);
        // cout << "XCROSS: " << inter.first << " " << inter.second << " " <<  d1 << " " << d2 << endl;
        if (d1 == d2 || d1 == 0 || d2 == 0) {
            return 0;
        }else return 1;
    }
}

bool ycross (mk_pair A, mk_pair B, mk_pair P) {
    mk_pair inter = intersection(A, B, P, 0);
    if (inter.first == FLT_MAX && inter.second==FLT_MAX) {
        return 0;
    }else {
        double d1 = area(A, P, inter);
        double d2 = area(B, P, inter);
        // cout << "YCROSS: " << inter.first << " " << inter.second << " " <<  d1 << " " << d2 << endl;
        if (d1 == d2 || d1 == 0 || d2 == 0) {
            return 0;
        }else return 1;
    }
}
void solve () {
    vector< mk_pair > v;
    for (int i=0; i <3; i++) {
        double x,y;
        cin >> x >> y;
        v.pb(make_pair(x,y));
    }
    bool a = 0, b = 0, c = 0;
    if (xcross(v[1], v[2], v[0]) || ycross(v[1], v[2], v[0])) {cout << "YES\n"; return;}
    else if (xcross(v[2], v[0], v[1]) || ycross(v[2], v[0], v[1])){cout << "YES\n"; return;}
    else if (xcross(v[1], v[0], v[2]) || ycross(v[1], v[0], v[2])){cout << "YES\n"; return;}
    else { cout << "NO\n"; return;}

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