#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long int ll;
ll vis[100001],w[100001];
ll n,x,y,ans=0;
ll flag=0;
void solve(ll x)
{ 
  vis[x]=1;
  queue<pair<ll,ll> >que;
  que.push(mp(x,0));
  while(!que.empty())
  {
     ll cur=que.front().first;
     ll cval=que.front().second;
     que.pop();
     if(cur==y)
     {
     	cout<<cval<<"\n";
     	while(!que.empty())
     	que.pop();
     	return;
	 }
	 if(vis[(cur+w[cur])%n]==0)
	 {
	   	que.push(mp((cur+w[cur])%n,cval+1));
	   	vis[(cur+w[cur])%n]=1;
	 }
	 if(vis[(cur-w[cur]+n)%n]==0) 	
	 {
	   	que.push(mp((cur-w[cur]+n)%n,cval+1));
	   	vis[(cur-w[cur]+n)%n]=1;
	 }
  }
  cout<<"-1\n";	
}


int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
        cin>>n>>x>>y;
        x--;
		y--;
        flag=0;
        ll j;
        ans=0;
        for(j=0;j<n;j++)
        {
        	vis[j]=0;
        	cin>>w[j];
		}
		solve(x);
	}
	return 0;
}

