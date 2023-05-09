#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 
 
#define int long long 
 
  void sol(){ 
    int n,m; 
    cin>>n>>m; 
     
    vector<int> v(n); 
    for(auto &x:v) cin>>x; 
     
    sort(v.begin(),v.end()); 
     
    while(m--){ 
      int a,b,c; 
      cin>>a>>b>>c; 
      if(c<=0){ 
        cout<<"NO"<<endl; 
        continue; 
      } 
       
       
    // int i = upper_bound(v.begin(),v.end(),b) - v.begin(); 
    int i = lower_bound(v.begin(),v.end(),b)-v.begin(); 
    int x = 4*a*c; 
     
    if(i!=n){ 
      int pp = b-v[i]; 
      pp*=pp; 
       
      if(pp<x){ 
        cout<<"yes"<<endl; 
        cout<<v[i]<<endl; 
        continue; 
      } 
    } 
     
    if(i!=0){ 
      i--; 
       
      int pp = b - v[i]; 
       
      pp*=pp; 
       
      if(pp<x){ 
        cout<<"yes"<<endl; 
        cout<<v[i]<<endl; 
        continue; 
      } 
       
       
    } 
     
     
    cout<<"NO"<<endl; 
     
     
     
       
       
       
    } 
    
    
    return; 
  } 
 
signed main()  
{ 
     
    int t; 
    cin>>t; 
    while(t--){ 
      sol(); 
    } 
     
    return 0; 
}