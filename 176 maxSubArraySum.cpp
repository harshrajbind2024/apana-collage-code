//  run
#include<bits/stdc++.h>
using namespace std; 
 
 void maxSumSubarray(int a[],int n, int k,int x){
    int sum=0,ans=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    if(sum<x){
        ans=sum;
    }
    for(int i=k;i<n;i++){
        sum=sum-a[i-k];
        sum=sum+a[i];
        if(sum<x){
            ans=max(ans,sum);
        }
    }
    cout<<ans;
 }

int main(){
    int n=6;
    int a[n]={7,4,5,6,8,9};
    int k=3;
    int x=20;
    maxSumSubarray(a,n,k,x);   // output=19
}