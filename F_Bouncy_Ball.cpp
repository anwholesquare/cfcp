#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// DR -> +1 +1 
// DL -> +1 -1
// UR -> -1 +1
// UL -> -1 -1

// top bottom hit -> up = !up
// left right hit -> left = !left
// cornet hit -> up = !up, left = !left


int cnt = 0, corner = 0, r = 0, c = 0, vx, vy, lx, ly, xstep, ystep;

bool isIntersectLinebyPoint (ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
    if (max(x1, x2) < x3 || min(x1, x2) > x3) return false;
    if (max(y1, y2) < y3 || min(y1, y2) > y3) return false;
    ll a = y2 - y1;
    ll b = x1 - x2;
    ll c = x2 * y1 - x1 * y2;
    ll d = a * x3 + b * y3 + c;
    if (d == 0) {
        return true; 
    } else {
        return false;
    }
}

void check(int& x1, int& y1, int& x2, int& y2 , int& up, int& left) {

    for (int i=0; i<4*r*c; i++) {


    vx = up == -1 ? 1 : r;
    vy = left == -1? 1 : c;
    xstep = abs(vx -x1);
    ystep = abs(vy-y1);
    if (xstep < ystep) {
        up = -up;
        lx = vx; ly = y1 + (left)*xstep;
    }
    else if (xstep > ystep)  {
        left = -left;
        ly = vy; lx = x1 + (up)*ystep;
    }else {
        up = -up; left = -left;
        lx = vx; ly = vy;
    } 

    if (isIntersectLinebyPoint(x1, y1, lx, ly,  x2, y2)) {
        cout << cnt << endl;
        return;
    }  
    
    cnt++;
   
    x1 = lx; y1 = ly;
    }
    cout << -1 << endl;
        
}

void solve () {
    cnt = 0;
    int  x1, y1, x2,y2;
    string d;
    cin >> r >> c >> x1 >> y1 >> x2 >> y2 >> d;

    int up = (d[0] == 'U') ? -1 : 1;
    int left = (d[1] == 'L') ? -1 : 1;


    if (x1 == x2 && y1 == y2) {
        cout << 0 << endl;
        return;
    }

    check (x1,y1,x2,y2,up,left);
}

int main () {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}