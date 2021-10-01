#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int main() {
    lln n;
    cin>>n;
    vector<lln>ar(n);

    if(n==1) cout<<"1"<<endl;

    else if(n<4){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        lln count=1;
        for(int i=1;i<n;i+=2){
            ar[i]=count;
            count++;
        }
        for(int i=0;i<n;i+=2){
            ar[i]=count;
            count++;
        }
        for(lln i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}