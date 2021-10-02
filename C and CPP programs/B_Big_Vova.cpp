#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 
#define pb push_back 
const lln MOD=1000000007; 

void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n),vis(n);

    for(int i=0;i<n;i++) cin>>a[i];

    int d=0;

    for(int i=0;i<n;i++){
        int ind=0;
        int maxi=0;
        for(int j=0;j<n;j++){
            if(!vis[j] && __gcd(d,a[j])>maxi){
                maxi=__gcd(d,a[j]);
                ind=j;
            }
        }
        d=maxi;
        vis[ind]=1;
        b[i]=a[ind];
    }
    for(auto i:b){
        cout<<i<<" ";
    }
    cout<<"\n";
    return;


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}