#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int pre=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        pre=pre^a[i];
        }
        for(int i=0;i<n;i++)
        {
         a[i]=a[i]^pre;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
          ans=ans^a[i];
        }
        if(ans==0)
        cout<<pre<<endl;
        else
        cout<<-1<<endl;

    }

    return 0;
}