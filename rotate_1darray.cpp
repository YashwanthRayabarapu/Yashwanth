#include <bits/stdc++.h>
using namespace std;
void rot(int a[], int n)
{
int temp = a[0], i;
for (i = 0; i < n - 1; i++)
a[i] = a[i + 1];
a[i] = temp;
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
int k = 3;
for (int i = 0; i <=k; i++)
    rot(a, n);
for(int i = 0; i < n; i++)
{
cout<<a[i]<<"\t";
}
cout<<"\n";
return 0;
}
