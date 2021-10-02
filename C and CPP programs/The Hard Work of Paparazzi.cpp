#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pi (3.141592653589)
#define pb push_back
#define mp make_pair
#define INF 1000000000
#define MOD 1000000007
#define vll vector<ll>
#define vpll vector<pair<ll,ll> >
#define pll pair<ll,ll>
#define ff first
#define ss second
ll diff(pll p1, pll p2)
{
	return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

void solve()
{
	vector<pair<ll,pll> > v;
	ll w, x, y;
	ll j;
	ll r, n;
	cin >> r >> n;
	for(j = 0; j < n;  j++)
	{
		cin >> w >> x >> y;
		v.pb(mp(w , mp(x , y)));
	}
	
	ll dp[n] = {0};
	ll k , mx = 0, tmx = 0 ,omax = 0;
	for(j = 0 ; j < n; j++)
	{
		mx = 0;
		pll pp = mp(1,1);
	   if(diff(v[j].second,pp) > v[j].first)
	   continue;
	   //cout<<"ha\n";
	   dp[j] = 1;
	   if(j >= 2 * r)
	   {
	   	 k = j - 2 * r + 1; 
	   }
	   else
	   {
	   	 k = 0;
	   }
	   for(; k < j; k++)
	   {
          pll p1 , p2;
		  p1 = v[k].second;
		  p2 = v[j].second;
		  ll temp = diff(p1 , p2);
		  ll t1 = v[k].first;
		  ll t2 = v[j].first;
		  if(t1 + temp <= t2)
		  dp[j] = max(dp[j] , dp[k] + 1);
		  mx = max(mx , dp[j]);	   	
	   }
	   mx = max(mx , dp[j]);
	   if(j >= 2 * r)
	   {
	   	 tmx = max(dp[j - 2 * r],tmx);
	   }
	   dp[j] = max(dp[j], max(mx , tmx + 1));
	   omax = max(dp[j] , omax);
	}
	cout << omax <<"\n";  
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t = 1;
//cin>>t;
while(t--){
solve();
}
return 0;
}

