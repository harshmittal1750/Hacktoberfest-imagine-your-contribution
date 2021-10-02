#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* class Solution{
public: */
 	void merge(int arr1[], int arr2[], int n, int m) {
	    
	    int i = 0, j = 0, k = n - 1;
   
        while (i <= k && j < m) {
            if (arr1[i] < arr2[j])
                i++;
            else {
                swap(arr2[j++], arr1[k--]);
        }
    }

        sort(arr1, arr1 + n);

        sort(arr2, arr2 + m);
	    
	    // code here
	
}; 

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m,i;
        cin>>n>>m;
        int A[n],B[m];
        for (i=0;i<n;i++){
            cin>>A[i];
        }
        for (i=0;i<m;i++){
            cin>>B[i];
        }
        merge(A,B,n,m);
        for (i=0;i<n;i++){
            cout <<A[i]<<" ";
        }
        for (i=0;i<m;i++){
            cout <<B[i]<<" ";
        }
        cout <<"\n";
    }

    return 0;
}
