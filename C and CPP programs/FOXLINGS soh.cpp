#include <bits/stdc++.h>
using namespace std;
typedef int ll;

ll n,m,ar[100000001],temp;
map<ll,ll>mami;
ll find(ll a)
{
	if(ar[a]<0)
	{
		return a;
	}
	
	return ar[a]=find(ar[a]);
}

void Union(ll a,ll b)
{
	temp++;
	a=find(a);
	b=find(b);
	mami[ar[a]]--;
	mami[ar[b]]--;
	if(mami[ar[a]]==0)
	mami.erase(ar[a]);
	if(mami[ar[b]]==0)
	mami.erase(ar[a]);
	ar[a]=+ar[b];
	ar[b]=a;
	mami[ar[a]]++;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	cin>>n>>m;
	memset(ar,-1,sizeof(ar));
	mami[-1]=n;
	temp=n;
	ll j;
	for(j=0;j<m;j++)
	{
		ll a,b;
		cin>>a>>b;
		a=find(a);
		b=find(b);
		if(a==b)
		continue;
		else
		{
			Union(a,b);
		}
	}
	temp=0;
	map<ll,ll>::iterator it;
	
	for(it=mami.begin();it!=mami.end();it++)
	{
		temp+=it->second;
	}
	cout<<temp<<"\n";
	return 0;
}

