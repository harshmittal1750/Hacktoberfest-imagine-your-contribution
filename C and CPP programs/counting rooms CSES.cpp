#include <bits/stdc++.h>
using namespace std;
typedef  int ll;
//!cin.eof()
ll n,m;
bool vis[1001][1001];
char ar[1001][1001];
ll dx[]={0,0,-1,1};
ll dy[]={1,-1,0,0};

bool is_possible(ll a,ll b)
{
	if(a<1||a>n||b<1||b>m||ar[a][b]=='#')
	return false;
	if(vis[a][b]==true)
	return false;
	
	return true;
}

void dfs(ll a,ll b)
{
	vis[a][b]=true;
	ll j;
	
	for(j=0;j<4;j++)
	{
	   if(is_possible(a+dx[j],b+dy[j]))
	   {
	      dfs(a+dx[j],b+dy[j]);
	   }	
	}
}


int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	cin>>n>>m;//declared globally
	ll j,k;
	for(j=1;j<=n;j++)
    for(k=1;k<=m;k++)
    cin>>ar[j][k];
    
	ll cc=0;
	for(j=1;j<=n;j++)
    for(k=1;k<=m;k++)
    {
    	if(vis[j][k]==false&&ar[j][k]=='.')
    	dfs(j,k),cc++;
	}
	cout<<cc<<"\n";
	return 0;
}

