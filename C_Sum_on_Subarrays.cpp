#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

bool check(int i,int k){
  if(i*(i+1) == 2*k){
    return true;
  }
  return false;
}

void solve () {
    int n , k ;
    cin>>n>>k;
    vector<int> a(n+1,-1000);
    
    
    if(k == 0){
    for(int i=0;i<n;i++){
        cout<<-1<<" ";
    }
    cout<<endl;
        return;
    }
    
    
    int idx = 1 ; 
    
    
    for(int i = 1 ; i<= n ; i++){
    
        if(i*(i+1) == 2*k){
            idx = i ; 
            break; 
        }
        else if(i*(i+1) > 2*k){
            break;
        }
        idx = i ; 
    }
    
    

    for(int i = 1 ; i<=n;i++){
    if(i <= idx){
        a[i] = 2; 
    }
    else a[i] = -1000 ; 
    }

    int f = idx*(idx+1)/2 ; 
    int N = k - f ; 

    if(N == 0){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return;
    }

    
    int sum = 0 ; 
    int i = idx ; 

    while(i > N-1){
    sum += 2 ; 
    i--;
    }
    sum--; 
    a[idx+1] = -sum ; 
    
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

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