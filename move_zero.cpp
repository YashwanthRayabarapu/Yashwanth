/*vector input;
vector ko rever
new vector
next vale 1;
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,s=0;
    cin>>n;
    int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
            a[s++] =a[i];
    }
    for(i=s;i<n;i++)
    {
        a[i]=0;
    }

    for(i=0;i<n;i++)
        cout<<a[i];
}
