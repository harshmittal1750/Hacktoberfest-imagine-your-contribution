#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

void solve(){
    lln a,b;
    cin>>a>>b;
    if(2*min(a,b)<max(a,b)){
        cout<<"NO"<<endl;
        return;
    }
    else if(2*min(a,b)==max(a,b)){
         cout<<"YES"<<endl;
         return;
    }
    else{
        a%=3;
        b%=3;
        if(a==0 && b==0){
            cout<<"YES"<<endl;
            return;
        }
        else if(a==1 && b==1){
            cout<<"NO"<<endl;
            return;
        }
        else if(a==0 || b==0){
            cout<<"NO"<<endl;
            return;
        }
        else if(a==2 && b==2){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }
}
int main() {
    lln t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}