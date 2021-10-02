#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
//!cin.eof()
//ll dx[]={-1,-1,-1,0,1,1,1,0};
//ll dy[]={1,0,-1,-1,-1,0,1,1};

ll find(ll n)
{
	return n+(n)*(n+1)/2;
}


void solve()
{
	ll x;
	cin>>x;
   ll low=0,high=100000;
   ll mid,ans=100000;
   while(high>low)
   {
   	  ll mid=(high+low)/2;
   	  ll sum=find(mid);
   	  if(sum<x)
   	  {
   	  	low=mid+1;
	  }
	  else if(sum==x)
	  {
	  	ans=mid;
	  	break;
	  }
	  else
	  {
	  	high=mid-1;
	  	ans=min(ans,mid);
	  }
   }
   ll temp=ans+ans*(ans-1)/2;
   if(temp>=x)
   cout<<2*ans-1<<"\n";
   else
   cout<<2*ans<<"\n";
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

