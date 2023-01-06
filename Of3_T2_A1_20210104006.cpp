#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int A[] = {3,5,4,2,9};
void quicksort(ll l, ll r) {
    if (l < r) {
        ll pivot = l;
        int i = l+1;
        int j = r;
        while (A[i] < A[pivot] ) {
                i++;
        }
        while (A[j] > A[pivot]) {
                j--;
        }
        while (i < j) {
            swap(A[i], A[j]);
            while (A[i] < A[pivot] ) {
                i++;
            }
            while (A[j] > A[pivot]) {
                j--;
            }
        }
        swap(A[j], A[pivot]);
        quicksort(pivot+1, j-1);
        quicksort(j+1, r);
    }
}

int main () {
    quicksort(0, 4);
    for (int i =0; i< 5;i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}