#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,j;
    cin>>n;
    int a[n];
    cin>>k;
    int c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
            ++c;
    }
    int unn=0;
    for(i=0;i<n;i++)
        if(a[i]>k)
            ++unn;
    int ans=unn;
    for(i=0,j=c;j<n;++i,++j)
    {
        if(a[i]>k)
            --unn;
        if(a[j]>k)
            ++unn;
        ans=min(ans,unn);
    }
    cout<<"------\n"<<ans;
    return 0;
}
