#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int main() {
    lln n;
    cin>>n;
    lln ans=0;
    for(int i=5;i<=n;i*=5){
        ans+=n/i;
    }
    cout<<ans<<endl;
    return 0;
}