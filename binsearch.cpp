#include <bits/stdc++.h>
using namespace std;


vector<int> insertion_sort(vector<int> v)
{
    int j, key;
    for (int i =1; i<v.size(); i++) {
        key = v[i];
        j = i-1;
        while (j >= 0 && v[j] < key) {
            v[j+1] = v[j]; j--;
        }
        v[j+1] = key;
    }
    return v;
}
int main () {
    vector <int> arr = {7,3,5,3,7,2,9, 11 ,2};
    arr = insertion_sort(arr);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}