#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int A[] = {3,5,4,2,9};
void merge (ll l, ll mid, ll r) {

    ll m = mid - l + 1;
    ll n = r - mid;

    int L[m+1], R[n+1];
    for (int i =0; i <m; i++) L[i] = A[l+i];
    for (int i =0; i <n; i++) R[i] = A[mid+i+1];
    L[m] = INT_MAX;
    R[n] = INT_MAX;
    int i, j, k;
    i = j = k = 0;
    for ( k = 0; k <= m+n-1; k++) {
        if (L[i] < R[j]) { A[k+l] = L[i]; i++;}
        else { A[k+l] = R[j]; j++;}
    }
    
    cout << endl;
}
void mergesort( ll l , ll r ) {
    if (l < r) {
        ll mid = (l+r) / 2;
        mergesort(l,mid);
        mergesort(mid+1, r);
        merge(l,mid,r);
    }
}


int main () {
    mergesort(0, 4);
    for (int i =0; i< 5;i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}