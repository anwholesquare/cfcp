#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char mini='z';
    int idx;
    for(int i=0;i<n;i++){
        if(mini>=s[i]){
            mini=s[i];
            idx=i;
        }
    }
    string ans;
    ans=mini+s.substr(0,idx)+s.substr(idx+1);
    cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}