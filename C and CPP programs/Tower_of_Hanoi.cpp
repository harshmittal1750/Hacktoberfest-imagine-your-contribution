#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<A<<" "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}
int main() {
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    TOH(n,1,2,3);
    return 0;
}