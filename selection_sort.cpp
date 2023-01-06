#include <bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int> v) {
    int min_index = 0;
    for (int i =0; i< v.size()-1; i++) {
        min_index = i;
        for (int j = i+1; j < v.size()-i-1; j++) {
            if (v[j] < v[min_index]) {
                min_index = j;
            }
        }
        swap(v[i], v[min_index]);
    }
    return v;
}


vector<int> v;
void merge(int lo, int mid, int hi) {
    int m = mid - lo + 1;
    int n = hi - mid;
    vector<int> L(m+1), R(n+1);
    for (int i =0; i< m; i++) {
        L[i] = v[lo +i];
    }
    for (int j = 0; j < n; j++) {
        R[j] = v[mid+ 1 + j];
    }
    L[m] = INT_MAX;
    R[n] = INT_MAX;
    int i, j, k = 0;
    for (int k=0; k<m+n-1; k++) {
        if (L[i] < R[j]) {
            v[k] = L[i];
            i++;
        }else{
            v[k] = R[j];
            j++;
        }
    }

}
void mergeSort(int lo, int hi) {
    if (lo < hi) {
        int mid = (lo + hi) /2;
        mergeSort(lo, mid);
        mergeSort(mid+1, hi);
        merge(lo, mid, hi);
    }
}



vector<int> insertion_sort(vector<int> v) {
    for (int i =1; i<v.size(); i++) {
        int j = i-1;
        int key = v[i];
        while (j >= 0 && v[j] > key ) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }

    return v;
}
int main () {
    vector<int> a = {1,-4,2,3,7,6,4};

    mergeSort(0, a.size()-1);
    //a = insertion_sort(a);
    a = v;
    for (int i: a) {
        cout << i << " "; 
    }
    cout << endl;
    return 0;
}