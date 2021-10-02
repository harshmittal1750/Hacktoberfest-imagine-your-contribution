#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef int ll;
//!cin.eof()
//ll dx[]={-1,-1,-1,0,1,1,1,0};
//ll dy[]={1,0,-1,-1,-1,0,1,1};
ll n;
 
ll bfs(ll n)
{
	set<ll>se;
	vector<ll>ve;
	if(n==1||n==0)
	return 0;
	ll ok=1;
	ll j=0;
	ll flag=1;
	ve.pb(n);
	ll l;
	ll ans=0;
	while(flag)
	{
		ans++;
		for(;j<ok;j++)
		{
			ll p=-1,q=-1,r=-1;
			if(ve[j]%3==0&&se.find(ve[j]/3)==se.end())
			ve.pb(ve[j]/3),p=ve[j]/3,se.insert(p);
			if(ve[j]%2==0&&se.find(ve[j]/2)==se.end())
			ve.pb(ve[j]/2),q=ve[j]/2,se.insert(q);
			if(se.find(ve[j]-1)==se.end())
			ve.pb(ve[j]-1),r=ve[j]-1,se.insert(r);
			
			if(p==1||q==1||r==1)
			flag=0;
		}
		ok=ve.size();
	}
	return ans;
}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
       cin>>n;  
       cout<<bfs(n)<<"\n";
	}
	return 0;
}
