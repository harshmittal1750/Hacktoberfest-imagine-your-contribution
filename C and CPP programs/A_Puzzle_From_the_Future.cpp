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
string s;
cin>>s;
cout<<1;
ll c=(s[0]-'0')+1;
for(ll j=1;j<n;j++)
{
   if(((s[j]-'0')+1)!=c)
   {
   cout<<1;
   c=(s[j]-'0')+1;
   }
   else
   {
   cout<<0;
   c=(s[j]-'0');
   }
}
cout<<"\n";
}
return 0;
}
