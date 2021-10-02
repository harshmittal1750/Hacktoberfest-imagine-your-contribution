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
	ll n, m;
	cin >> n >> m;
	ll r[n][m], c[n][m] ,tar[n][m];
	ll j, k;
	map<ll,ll>posy,posx;
	for( j = 0; j < n; j++)
	{
		for(k = 0; k < m; k++)
		{
			cin >> r[j][k];
			posy[r[j][k]] = k;
		}
	}
	for( k = 0; k < m; k++)
	{
		for( j = 0; j < n; j++)
		{
			cin >> c[j][k];
			posx[c[j][k]] = j;
			tar[posx[c[j][k]]][posy[c[j][k]]] = c[j][k];
		}
	}
	for( j = 0; j < n; j++)
	{
		for(k = 0; k < m; k++)
		{
			cout << tar[j][k] <<" ";
		}
		cout<<"\n";
	}
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}

