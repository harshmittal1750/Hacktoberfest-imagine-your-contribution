#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

void solve(){
    lln n;
    cin>>n;
    if(n==1 || n==2){
        cout<<"NO"<<endl;
        return;
    }
    if(((n%2==0)&&(n/2 %2!=0))||((n%2!=0) && ((n-3)/2 %2!=0))){
        cout<<"NO"<<endl;
        return;
    }
    vector<lln>a1;
    vector<lln>a2;
    if(n%2!=0){
         a1.push_back(1);
         a1.push_back(2);
         a2.push_back(3);
         lln x=n;
         for(int i=4;i<=(n+3)/2;i++){
             if(i%2){
                 a1.push_back(i);
                 a1.push_back(x);
                 x--;
             }
             else{
                 a2.push_back(i);
                 a2.push_back(x);
                 x--;
             }
         }
    }
    else{
        lln x=n;
        for(int i=1;i<=n/2;i++){
            if(i%2){
                 a1.push_back(i);
                 a1.push_back(x);
                 x--;
            }
            else{
                 a2.push_back(i);
                 a2.push_back(x);
                 x--;
             }
        }
    }
    lln a=a1.size();
    lln b=a2.size();
    cout<<"YES"<<endl;
    cout<<a<<endl;
    for(int i=0;i<a;i++){
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    cout<<b<<endl;
    for(int i=0;i<b;i++){
        cout<<a2[i]<<" ";
    }

    return;
}
int main() {
    solve();
    return 0;
}