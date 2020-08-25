#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	//code
	ll test;
	cin>>test;


	while(test--)
	{
	    ll n;
	    cin>>n;
	    vector<ll>vect(n);
	    for(ll i=0;i<n;i++)
	        cin>>vect[i];
	    reverse(vect.begin(),vect.end());

	    for(ll i=0;i<n;i++)
        {
            cout<<vect[i];
        }

	    ll m;
	    cin>>m;
	    vector<ll>sect(m);
	    for(ll i=0;i<m;i++)
	        cin>>sect[i];
	    reverse(sect.begin(),sect.end());


	    while(sect.size()!=vect.size())
	    {
	        if(sect.size()<vect.size())
	            sect.push_back(0);
	        else
	            vect.push_back(0);
	    }
	    ll carry=0;
	    vector<ll>ans;
	    for(ll i=0;i<vect.size();i++)
	    {
	        ll val=carry+vect[i]+sect[i];
	        if(val>9)
	            carry=1;
	        else
	            carry=0;
	        ans.push_back(val%10);
	    }
	    if(carry==1)
	        ans.push_back(carry);
	    while(ans[ans.size()-1]==0)
	        ans.pop_back();
	    for(ll i=ans.size()-1;i>=0;i--)
	        cout<<ans[i];
	    cout<<endl;
	}
	return 0;
}
