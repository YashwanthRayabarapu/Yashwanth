#include<bits/stdc++.h>
using namespace std;

bool Inverse(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{

		if (a[a[i]] == i)
			return true;
	}
	return false;
}

int main()
{
    int i,n;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
		if (Inverse(a,n))
			cout << "Yes";
		else
			cout << "No";
		return 0;
}

