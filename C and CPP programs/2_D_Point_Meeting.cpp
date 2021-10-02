#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pi (3.141592653589)
#define pb push_back
#define mp make_pair
#define INF 9223372036854775807
#define MOD 1000000007
#define vll vector<ll>
#define vpll vector<pair<ll,ll> >
#define pll pair<ll , ll>
#define ff first
#define ss second
#define mMul(a , b , m) (a * b) % m
#define mSub(a , b , m) (a - b + m) % m
#define mAdd(a , b , m) (a + b) % m
#define all(a) a.begin() , a.end()
ll gcd(ll a , ll b){if((a == 0) || (b == 0)) return a + b; return gcd(min(a , b) , max(a , b) % min(a , b));}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t = 1;
cin >> t;
while(t--){
   ll n;
   cin>>n;
   ll x[n],y[n];
   for(ll j=0;j<n;j++)
   cin>>x[j];
   for(ll j=0;j<n;j++)
   cin>>y[j];
   ll ans=INF;
   for(ll j=0;j<n;j++)
   {
       ll c=0;
       for(ll k=0;k<n;k++)
       {
           if(j!=k)
           {
               if(abs(x[k]-x[j])==0&&abs(y[k]-y[j])>0)
               c++;
               else if(abs(x[k]-x[j])>0&&abs(y[k]-y[j])==0)
               c++;
               else if(abs(x[k]-x[j])>0&&abs(y[k]-y[j])>0&&abs(x[k]-x[j])==abs(y[k]-y[j]))
               c++;
               else
               c+=2;
           }
       }
       ans=min(ans,c);
   }
   cout<<ans<<"\n";
}
return 0;
}
