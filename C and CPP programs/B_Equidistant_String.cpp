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
string s1,s2,s3;
cin>>s1>>s2;
ll cn=0,i=0;
for(ll j=0;j<s1.length();j++)
{
    if(s1[j]!=s2[j])
    {
        cn++;
        if(i==0)
        {
        s3.pb(s1[j]);
        i=1;
        }
        else
        {
        s3.pb(s2[j]);
        i=0;
        }
    }
    else
    s3.pb(s1[j]);
}
if(cn%2)
cout<<"impossible"<<"\n";
else
cout<<s3<<"\n";
return 0;
}
