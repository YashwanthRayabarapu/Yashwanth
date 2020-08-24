#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"size of window ::"<<endl;
    cin>>k;
    bool x;
        for(i=0;i<n-k+1;i++)
        {
            x=false;
            for(j=0;j<k;j++)
            {
                if(a[i+j]<0)
                {
                    cout<<a[i+j];
                    x=true;
                    break;
                }
            }
            if(x==false)
            {
                cout<<"  "<<0;
            }
        }

    return 0;
}
