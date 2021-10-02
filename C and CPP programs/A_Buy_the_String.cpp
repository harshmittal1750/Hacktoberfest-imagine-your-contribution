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
ll n,c0,c1,h;
cin>>n>>c0>>c1>>h;
string s;
cin>>s;
ll a=0;
for(ll j=0;j<s.length();j++)
{
    if(s[j]=='0')
    a+=c0;
    else if(s[j]=='1')
    a+=c1;
}
if(c0==c1)
cout<<a<<"\n";
else if(c0>c1)
{
    ll aa=a,flag=0;
    for(ll j=0;j<s.length();j++)
    {
       if(s[j]=='0')
       {
           aa-=c0;
           aa=aa+h+c1;
       }
       if(aa>a)
       {
           flag=1;
       break;
       }
    }
    if(flag==1)
    cout<<a<<"\n";
    else
    cout<<aa<<"\n";
}
else
{
    ll aa=a,flag=0;
    for(ll j=0;j<s.length();j++)
    {
       if(s[j]=='1')
       {
           aa-=c1;
           aa=aa+h+c0;
       }
       if(aa>a)
       {
           flag=1;
       break;
       }
    }
    if(flag==1)
    cout<<a<<"\n";
    else
    cout<<aa<<"\n";
}
}
return 0;
}
