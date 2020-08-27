// C++ program to count subsequences of the
#include <bits/stdc++.h>
using namespace std;
int sequenceCount(string s)
{
    int a,b,c;
    a=b=c=0;
	for ( int i = 0; i < s.size(); i++)
    {
		if (s[i] == 'a')
			{
			    a = (1 + 2 * a);
			}
		else if (s[i] == 'b')
			{
                b = (a + 2 * b);
			}
		else if (s[i] == 'c')
			{
			    c = (b + 2 * c);
			}
	}

	return c;
}
int main()
{
	string s = "abbc";
	cout << sequenceCount(s) << endl;
	return 0;
}
