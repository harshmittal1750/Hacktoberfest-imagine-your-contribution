#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int main() {
    lln mod=1e9+7;
    lln n;
    cin>>n;
    lln ans=1;
    for(int i=1;i<=n;i++){
        ans*=2;
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}