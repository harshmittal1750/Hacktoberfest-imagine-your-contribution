#include <bits/stdc++.h>
using namespace std;
typedef int ll;
//!cin.eof()
ll par[100001];

ll find(ll a)
{
	if(par[a]<0)
	{
		return a;
	}
	return par[a]=find(a);
}

void Union( ll a,ll b )
{
	par[a]=min(par[a],par[b]);
	par[b]=a;
}
int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll j,a,b;
	for(j=1;j<=n;j++)
	{
		par[j]=-j;
	}
	
	for(j=1;j<=m;j++)
	{
		
		cin>>a>>b;
	    a=find(a),b=find(b);
	    if(a!=b)
	    Union(a,b);
	}
	ll q;
	cin>>q;
	for(j=0;j<q;j++)
	{
	
		cin>>a>>b;
		ll a_m=find(a);
		ll b_m=find(b);
		if(a_m==b_m)
		cout<<"TIE\n";
		else
		{
			if(par[b_m]<par[a_m])
			{
				cout<<b<"\n";
			}
			else
			{
				cout<<a<<"\n";
			}
		}
	}
	return 0;
}

