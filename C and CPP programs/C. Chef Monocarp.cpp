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

ll dp[201][500] , n;
ll a[201];

ll findAns(ll idx, ll t)
{
	if(idx == n)
	return 0;
	
	if(t == 2 * n)
	return INF;
	
	if(dp[idx][t] != -1)
	return dp[idx][t];
	
	return dp[idx][t] = min(findAns(idx + 1, t + 1) + abs(t - a[idx]), findAns(idx , t + 1));
}

void solve()
{
	cin >> n;
    ll j;
    for(j = 0; j < n; j++)
	cin >> a[j];
    sort(a, a + n);
    memset(dp, -1, sizeof(dp));
    ll ans = findAns(0 , 1);   
    cout << ans <<"\n";
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

