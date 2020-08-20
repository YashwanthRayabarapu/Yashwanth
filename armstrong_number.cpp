#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int v=0,x,i,n,s=0;
    cin>>n;
    i=n;
    while(i!=0)
    {
        i=i/10;
        s++;
        cout<<s<<endl;
    }
    while(n!=0)
    {
        x=n%10;
        //cout<<x<<endl;
        //cout<<pow(n,x);
        int p = round(pow(x,s));
        v =v+p;
        n=n/10;
    }
    if(v==n)
    {
        cout<<"AN"<<endl;
    }
    else{
        cout<<"NAN"<<endl;
    }
    return 0;
}
