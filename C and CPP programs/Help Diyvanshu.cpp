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

ll fact(ll n)
{
	ll res = 1;
	ll j ;
	for(j=1;j<=n;j++)
	res *= j;
	return res;
}
void solve()
{
	ll a, b, c;
	cin>>a>>b>>c;
	ll ans = 6;
	cout<<fact(a)*fact(b)*fact(c)*ans<<"\n";
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    solve();

return 0;
}

