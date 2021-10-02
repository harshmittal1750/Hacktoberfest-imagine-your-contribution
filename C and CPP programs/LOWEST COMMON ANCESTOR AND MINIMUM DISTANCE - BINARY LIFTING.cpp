#include <bits/stdc++.h>
using namespace std;
typedef int ll;
ll maxn=10;
ll n;
vector<ll>adj[10001];
ll level[10001],lca[10000][10];

void dfs(ll node,ll le,ll par)
{
	level[node]=le;
	lca[node][0]=par;
	ll j;
	for(j=0;j<adj[node].size();j++)
	{
		if(adj[node][j]!=par)
		{
			dfs(adj[node][j],le+1,node);
		}
	}
}


void make_lca()
{
	dfs(1,1,-1);
	
	ll j,k;
	for(k=1;k<maxn;k++)
	{
		for(j=1;j<=n;j++)
		{
			if(lca[j][k-1]!=-1)
			{
				ll p=lca[j][k-1];
				lca[j][k]=lca[p][k-1];
			}
		}
	}
}


ll find_lca(ll a,ll b)
{
	if(level[a]<level[b])swap(a,b);
	
	ll d=level[a]-level[b];
	
	while(d>0)
	{
		ll i=log2(d);
		a=lca[a][i];
		d-=1<<i;
	}
	
	if(a==b)
	return a;
	
	ll j;
	for(j=maxn-1;j>=0;j--)
	{
		if(lca[a][j]!=-1&&lca[b][j]!=-1&&lca[a][j]!=lca[b][j])
		{
			a=lca[a][j],b=lca[b][j];
		}
	}
	return lca[a][0];
}


int main() {
   
	cin>>n;
	ll j,k;
	for(j=1;j<=n;j++)
	{
		for(k=0;k<maxn;k++)
		{
			lca[j][k]=-1;
		}
	}
	for(j=1;j<n;j++)
	{
		ll a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	make_lca();
	
	ll q;
	cin>>q;
	
	for(j=0;j<q;j++)
	{
		ll a,b;
		cin>>a>>b;
		
		ll lcca=find_lca(a,b);
		
		cout<<level[a]+level[b]-2*level[lcca]<<"\n";
	}
	
	return 0;
}


