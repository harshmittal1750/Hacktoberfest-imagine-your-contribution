#include <bits/stdc++.h>
using namespace std;
typedef int ll;

ll n,m;
vector<ll>adj[100];
ll vis[100],lev[100],par[100];

void dfs(ll a,ll b,ll pa)
{
	vis[a]=1;
	lev[a]=b;
	par[a]=pa;
	ll j;
	for(j=0;j<adj[a].size();j++)
	{
		if(vis[adj[a][j]]==0)
		{
			dfs(adj[a][j],b+1,a);
		}
	}
}

ll LCA(ll a,ll b)
{
	
	ll d=abs(lev[a]-lev[b]);
	if(lev[a]>lev[b])
	{
		while(d>0)
		a=par[a],d--;
	}
	else
	{
		while(d>0)
		b=par[b],d--;
	}
	if(a==b)
	return a;
	
	while(par[a]!=par[b])
	a=par[a],b=par[b];
	
	return par[a];
}

int main() {
	cin>>n>>m;
	ll j;
	for(j=1;j<=m;j++)
	{
		ll a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	dfs(1,0,-1);
//	for(j=1;j<=n;j++)
//	{
//		cout<<"parent of"<<j<<" "<<par[j]<<"\n";
//	}
	ll t;
	cin>>t;
	//cout<<t<<"\n";
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll p=LCA(a,b);
		cout<<p<<"\n";
	}

	return 0;
}

