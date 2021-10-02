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
ll ans=0;
void fun(ll n,ll val)
{
    if((n==1)||(n%4)==0)
    {
        ans=val;
        return;
    }
    if(n%2)
    {
        if(val==1)
        fun(n-1,2);
        else
        fun(n-1,1);
    }
    else
    {
        if(val==1)
        fun(n/2,2);
        else
        fun(n/2,1);
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t = 1;
cin >> t;
while(t--){
   ll n;
   cin>>n;
   if(n==1)
   cout<<"Alice"<<"\n";
   else if(n==2)
   cout<<"Bob"<<"\n";
   else if(n==3)
   cout<<"Alice"<<"\n";
   else
   {
   fun(n,1);
   if(ans==1) 
   cout<<"Alice"<<"\n";
   else
   cout<<"Bob"<<"\n";
   }
}
return 0;
}
