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
   string s;
   cin>>s;
   ll c1=0,c2=0,c3=0;
   for(ll j=0;j<s.length();j++)
   {
       if(s[j]=='A')
       c1++;
       else if(s[j]=='B')
       c2++;
       else
       c3++;
   }
   if((c1+c3)==c2)
   cout<<"YES"<<"\n";
   else
   cout<<"NO"<<"\n";
}
return 0;
}
