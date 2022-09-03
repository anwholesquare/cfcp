#include <bits/stdc++.h> 
using namespace std; 

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        n*=2;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        sort(arr+1, arr + (n +1)); 
        int flag=0;
        for (int i = 1; i <= n/2; i++) 
        {
            int l=arr[i+(n/2)]-arr[i];
            if(l<x)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}



// #include <bits/stdc++.h>
// using namespace std;




// void solve () {
//     int n,x;
//     cin >> n >> x;
//     vector<int> rows;
    
//     for (int i =0; i<n*2;i++) {
//         int y;
//         cin >> y; rows.push_back(y);
//     }

//     sort(rows.begin(), rows.end());
    
//     for (int i = 0; i <n; i++) {
//         if (rows[(n) + i] - rows[i] < x) {
//             cout << "NO\n"; return;
//         }
//     }
//     cout << "YES\n";

// }

// int main () {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }