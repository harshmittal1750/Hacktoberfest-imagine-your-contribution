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
	ll a[n], b[n];
	ll j;
	for(j = 0; j < n; j++)
	{
		cin >> a[j];
		if(j % 2)
		{
			b[j - 1] = -a[j];
			b[j] = a[j-1];
		}
	}
	for(j = 0; j < n;j++)
	{
		cout<< b[j] <<" ";
	}
	cout<<"\n";
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

