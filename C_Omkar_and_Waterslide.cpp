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


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n];
for(ll j=0;j<n;j++)
cin>>a[j];
ll ans=0,mm=0;
for(ll j=0;j<n-1;j++)
{
    if(a[j]>a[j+1])
    ans+=(a[j]-a[j+1]);
}
cout<<ans<<"\n";
}
return 0;
}
