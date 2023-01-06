#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;
int arr[] = {7,3,1,9,11,4,5,15,14};
void quicksort(int f, int l) {
    if (f < l) {
        int i = f + 1;
        int j = l;
        while (arr[i] < arr[f]) {
            i = i+1;
        }
        while (arr[j] > arr[f]) {
            j = j-1;
        }

        while (i < j) {
            swap(arr[i], arr[j]);
            while (arr[i] < arr[f]) {
                i = i+1;
            }
            while (arr[j] > arr[f]) {
                j = j-1;
            }
        }
        swap(arr[j], arr[f]);
        quicksort(f, j-1);
        quicksort(j+1, l);
    }
}


void quicksortPivotLast(int f, int l) {
    if (f < l) {
        int i = f;
        int j = l-1;
        while (arr[i] > arr[l]) {
            i = i+1;
        }
        while (arr[j] < arr[l]) {
            j = j-1;
        }

        while (i < j) {
            swap(arr[i], arr[j]);
            while (arr[i] > arr[l]) {
                i = i+1;
            }
            while (arr[j] < arr[l]) {
                j = j-1;
            }
        }
        swap(arr[i], arr[l]);
        quicksort(f, j-1);
        quicksort(j+1, l);
    }
}

int main () {
    quicksortPivotLast(0,8);
    for (int i: arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}