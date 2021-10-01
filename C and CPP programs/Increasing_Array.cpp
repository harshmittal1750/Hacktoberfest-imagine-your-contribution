#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int main() {
    lln n;
    cin>>n;
    vector<lln>x(n);
    for(lln i=0;i<n;i++) cin>>x[i];

    lln count=0;
    for(lln i=1;i<n;i++){
        if(x[i]<x[i-1]){
            count+=(x[i-1]-x[i]);
            x[i]=x[i-1];
        }
    }
    cout<<count<<endl;
    return 0;
}