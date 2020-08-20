
#include<bits/stdc++.h>
using namespace std;
/*
void solidRhombus(int n){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            {cout<<" ";}
        for(j=1;j<=n;j++)
            {cout<<"*";}
    cout<<"\n";
    }
}


void hollowRhombus();
*/

int main()
{
    int n=4,i,j;
    cout<<"----Solid Rhombus----"<<endl;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            {cout<<" ";}
        for(j=1;j<=n;j++)
            {cout<<"*";}
    cout<<"\n";
    }


    cout<<"----Hollow Rhombus----"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            {cout<<" ";}
        if(i==1||i==n)//for first row and final row
        {
            for(j=0;j<n;j++)
            {
                cout<<"*";
            }
        }
        else{
            for(j=1;j<=n;j++)
                if(j==1||j==n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }

        }
        cout<<endl;
    }
    return 0;
}
