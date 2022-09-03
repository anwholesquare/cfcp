#include <bits/stdc++.h>
using namespace std;

void swap (int& a, int &b) {
    int temp = a;
    a= b; b= temp;
}

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        int n;
        cin >> n;
        int arr1[n], arr2[n];
        for ( int i =0; i < n; i++) {
            cin >> arr1[i];
        }

        for ( int i =0; i < n; i++) {
            cin >> arr2[i];
        }
        int cnt = 0;
        vector<int> v;
        for ( int i =0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (arr1[i] > arr1[j]) {
                    swap(arr1[i], arr1[j]);
                    swap (arr2[i], arr2[j]);
                    if (i > j) {
                        v.push_back(i+1);
                        v.push_back(j+1);
                    }else if (i < j) {
                        v.push_back(j+1);
                        v.push_back(i+1);
                    }else {
                        v.push_back(i+1);
                        v.push_back(j+1);
                    }
                    
                    cnt++;
                }
                else if (arr1[i] == arr1[j] && arr2[i] > arr2[j]) {
                    swap(arr1[i], arr1[j]);
                    swap (arr2[i], arr2[j]);
                    if (i > j) {
                        v.push_back(i+1);
                        v.push_back(j+1);
                    }else if (i < j) {
                        v.push_back(j+1);
                        v.push_back(i+1);
                    }else {
                        v.push_back(i+1);
                        v.push_back(j+1);
                    }
                    cnt++;
                }
            }
        }
        int flag = 0;
        for ( int i =0; i < n && flag == 0; i++) {
            for (int j = i; j < n && flag == 0; j++) {
                if (arr2[i] > arr2[j] && arr1[i] == arr1[j]) {}
                else if (arr2[i] > arr2[j]) {
                    flag = 1; break;
                }
            }
        }

        if(flag == 1) {
            cout << -1 << endl;
        }else {
            cout << cnt << "\n";
            for (int i =0; i < cnt*2; i=i+2) {
                cout << v[i] << " " << v[i+1] << "\n";
            }
        }
        
        
    }

    return 0;
}