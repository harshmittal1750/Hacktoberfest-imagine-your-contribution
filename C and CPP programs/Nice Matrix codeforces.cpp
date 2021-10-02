#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define INF 1000000000
using namespace std;
typedef long long int ll;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
       ll n,m;
	   cin>>n>>m;
	   int j,k;
	   ll a[101][101];
	   for(j=1;j<=n;j++)
	   {
	   	  for(k=1;k<=m;k++)
	   	  {
	   	  	cin>>a[j][k];
		  }
	   }
	   
	   ll ans=0;
	   
	   for(j=1;j<=n;j++)
	   {
	   	  for(k=1;k<=m;k++)
	   	  {
	   	  	int x[4];
	        int y[4];
	        x[0]=j;
	        x[1]=n-j+1;
	        x[2]=j;
	        x[3]=n-j+1;
	        y[0]=k;
	        y[1]=k;
	        y[2]=m-k+1;
			y[3]=m-k+1;
	   	  	ll check=INF;
		    
			for(int i=0;i<4;i++)
			{
				ll p=0;
				for(int q=0;q<4;q++)
				{
					p+=abs(a[x[q]][y[q]]-a[x[i]][y[i]]);
				}
				check=min(check,p);
				//p=0;
			 } 
			 ans+=check;
		  }
		  
	   }
	   cout<<ans/4<<"\n";   
	   
	}
	return 0;
}

