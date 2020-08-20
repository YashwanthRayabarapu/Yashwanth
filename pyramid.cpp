#include<iostream>
using namespace std;
void ABC();
void RAP();
void TRI();

int main()
{
int x;
     cout<<"Reverse Right Angular Pyramid:"<<endl;
     ABC();
     cout<<"Right Angular Pyramid:"<<endl;
     RAP();
    cout<<"Triangle:"<<endl;
    TRI();
    return 0;
}
void RAP()
{
    int i,n;
    cout<<"size of pyramid \n";
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++)
        {
        cout<<"*";
        }
        cout<<"\n";
    }
}
    void ABC()
    {
        int i,n;
       cout<<"\n size of pyramid"<<endl;
        cin>>n;
    for(i=n;i>=1;i--)
    {

        for(int j=1;j<=i;j++)
        {
        cout<<"*";
        }
        cout<<"\n";
    }
    }

void TRI()
{
    int n,i,j,x;
    cin>>n;
     x = 2 * n - 2;
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < x; j++)
            cout << " ";
        x = x - 1;
        for ( j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
