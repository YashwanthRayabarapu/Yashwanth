#include <bits/stdc++.h>
using namespace std;

int equilibrium(int a[], int n)
{
    int total = 0;
    int leftsum = 0;

    for (int i = 0; i < n; ++i)
        total += a[i];

    for (int i = 0; i < n; ++i)
    {
        total -= a[i];
        if (leftsum == total)
            return i;

        leftsum += a[i];
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<< equilibrium(a,n);
    return 0;
}
