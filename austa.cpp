#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

bool leapYear (int n) {
    if (n % 400 == 0) {
        return 1;
    }
    else if (n % 100 == 0) {
        return 0;
    }
    else if (n % 4 == 0) {
        return 1;
    }else {
        return 0;
    }
}

void solve () {
    ll year = 2021;
    ll month = 12;
    ll day = 28;

    ll cyear, cmonth, cday;
    cin >> cyear >> cmonth>> cday;

    if (year > cyear) {
        swap(year,cyear);
        swap (cmonth, month);
        swap(day, cday);
    }
    else if (year == cyear) {
        if (month > cmonth) {
            swap(month, cmonth);
        }
        if (month == cmonth) {
            if (day > cday) {
                swap(day, cday);
            }
        }
    }
    ll vm[] = {0,1,-2,1,0,1,0,1,1,0,1,0,1};
    ll pref [12];
    pref[0] = 0;
    for (int i =1; i <=12; i++) {
        pref[i] = 30 + vm[i] + pref[i-1];
        
    }
    int lpcnt = 0;
    for (int i = year+1; i <=(cyear-1); i++) {
        if (leapYear(i)) {
            lpcnt++;
        }
    }
    ll yeardays = ((cyear-1) - (year +1) + 1) * 365 + lpcnt;
    ll cmonthsdays = pref[cmonth-1] + cday + leapYear(cyear);
    ll startdays = 365 - pref[month-1] - day + leapYear(year);
    cout << abs(yeardays +  cmonthsdays  + startdays) << endl;
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