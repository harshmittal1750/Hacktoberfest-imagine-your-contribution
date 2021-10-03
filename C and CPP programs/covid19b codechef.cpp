#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
	ll n;
    cin>>n;
    ll v[10];
    float ar[10][10];
    ll j,k,i;
    for(j=1;j<=n;j++)
    {
    	cin>>v[j];
	}
    for(j=1;j<=n;j++)
    {
    	for(k=1;k<=n;k++)
    	{
    		if(v[j]==v[k])
    		ar[j][k]=-1;
    		else
    		{
    			ll vel_d=v[j]-v[k];
    			ll dis_d=k-j;
    			float c=((float)(dis_d))/((float)(vel_d));
    			if(c<0)
    			ar[j][k]=-1;
    			else
    			ar[j][k]=c;
			}
		}
	}
//	for(j=1;j<=n;j++)
//	{
//		for(k=1;k<=n;k++)
//		{
//			cout<<ar[j][k]<<" ";
//		}
//		cout<<"\n";
//	}
	set<ll>unique;
	ll maxi=1,mini=10;
	for(i=1;i<=n;i++)
	{
		unique.clear();
		unique.insert(i);
		for(j=1;j<=n;j++)
		{
			if(ar[i][j]>0)
			{
				unique.insert(j);
				for(k=1;k<=n;k++)
				{
					if(ar[i][j]<ar[j][k])
					unique.insert(k);
				}
			}
		}
		ll c=unique.size();
		if(maxi<c)
		maxi=c;
		if(mini>c)
		mini=c;
	}
	cout<<mini<<" "<<maxi<<"\n";
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
       solve();
	}
	return 0;
}

