//  run
#include<bits/stdc++.h>
using namespace std;

int smallSubArrayWhithSum(int a[],int n,int x){
    int sum=0,minLen=n+1,start=0,end=0;
    while(end<n){
        while(sum<=x&&end<n){
            sum +=a[end++];
        }
        while(sum>x&&start<n){
            if(end-start<minLen){
                minLen=end-start;
            }
            sum -=a[start++];
        }
    }
    return minLen;
}

int main(){
    int n=6;
    int a[6]={1,4,45,6,10,19};
    int x=51;

    int minLenth=smallSubArrayWhithSum(a,n,x);
    if(minLenth==n+1){
        cout<<" sunarray not exist ";
    }
    else{
        cout<<" small lenth subarray "<<minLenth;
    }
}