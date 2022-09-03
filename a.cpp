#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void insertionSort ( vector <ll> &v) { 
    ll x, i , j;

    for (int i = 1; i<v.size(); i++) {
       x = v[i];
       j = i -1;
       while (j >= 0 && v[j] > x) {
            v[j+1] = v[j]; j--;
       } 
       v[j+1] = x;
    }
}

void bubbleSort (vector<ll> &v ) {
    ll n = v.size();
    for (int i  = 0; i< n; i++) {
        for (int j = 0; j <n; j++) {
            if (v[i] < v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
}

void selectionSort (vector<ll> &v) {
    ll n = v.size();
    for (int i =0; i<n; i++) {
        for (int j =i+1; j <n; j++) {
            if (v[i] < v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
}


int binarySearch (vector<ll> &v, ll f)
{
    ll n =  v.size();
    ll lo, hi, mid;
    lo = 0, hi = n-1;
    while (lo != hi) {
        mid = (lo + hi) /2;
        if (f == v[mid]) {return mid;}
        else if (f > mid) {
            lo = mid +1;
        }else{
            hi = mid - 1;
        }
    }

    return -1;

}
void solve () {
    
    ll n;
    cin >> n;
    vector<ll> v;

    for (int i =0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    bubbleSort(v);

    for (int i =0; i<n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << binarySearch(v, 3) << endl << binarySearch(v,6) << endl;

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