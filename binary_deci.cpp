#include<bits/stdc++.h>
using namespace std;

int bitode(long long);

int main()
{
    long n;
    cout << "Enter a binary number: ";
    cin >> n;

    cout << n << " <--------->" << bitode(n);
    return 0;
}

int bitode(long n)
{
    int dn = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        dn += remainder*pow(2,i);
        ++i;
    }
    return dn;
}
