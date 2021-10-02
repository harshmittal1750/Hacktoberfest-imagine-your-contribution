#include <bits/stdc++.h>
using namespace std;
typedef int ll;

ll ar[100001];

ll find(ll a)
{
	if(ar[a]<0)
    return a;
    
    return ar[a]=find(ar[a]);
}



void Union(ll a,ll b)
{
	a=find(a);
	b=find(b);
	if(a==b)
	return;
    
    ll k=-ar[a];
    ll y=-ar[b];
    if(y>k)
    {
    	ar[b]=ar[b]+ar[a];
    	ar[a]=b;
	}
	else
	{
		ar[a]+=ar[b];
		ar[b]=a;
	}	
}


int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
       map<string,ll>unique;
       ll count=0;
       memset(ar,-1,sizeof(ar));
       ll q;
       cin>>q;
       for(ll j=0;j<q;j++)
       {
       	  string s1,s2;
       	  cin>>s1>>s2;
       	  if((unique[s1]==0&&unique[s2]==0))
       	  {
       	     unique[s1]=(++count);
		     unique[s2]=(++count);
		     Union(unique[s1],unique[s2]);
		     cout<<-ar[find(unique[s1])]<<"\n";
		  }
		  else if((unique[s1]!=0&&unique[s2]!=0))
		  {
		  	 Union(unique[s1],unique[s2]);
		     cout<<-ar[find(unique[s1])]<<"\n";
		  }
		  else if(unique[s1]==0)
		  {
		  	 unique[s1]=(++count);
		  	 Union(unique[s1],unique[s2]);
		     cout<<-ar[find(unique[s1])]<<"\n";
		  }
		  else
		  {
		  	 unique[s2]=(++count);
		  	 Union(unique[s1],unique[s2]);
		     cout<<-ar[find(unique[s1])]<<"\n";
		  }
		  s1.clear();
		  s2.clear();
	   }
	   unique.clear();
	}
	return 0;
}

