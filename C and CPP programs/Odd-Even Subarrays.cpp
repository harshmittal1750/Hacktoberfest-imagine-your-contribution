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
#define pll pair<ll>
#define ff first
#define ss second

void solve()
{
	ll n;
	cin >> n;
	ll j;
	ll a[n];
	map<ll,ll>count;
	count[0] = 1;
	ll sum = 0;
	for(j = 0; j < n ;j++)
	{
		cin >> a[j];
		if(a[j] % 2)
		a[j] = -1;
		else
		a[j] = 1;
	}
	
	for(j = 0; j < n; j++)
	{
		sum += a[j];
		count[sum]++;
	}
	ll ans = 0;
	map<ll,ll>::iterator it;
	for(it = count.begin(); it != count.end(); it++)
	{
		ll x = it->second;
		ans += x * (x - 1) / 2; 
	}
	cout << ans <<"\n";
	return;
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

