// run
// n=5
// k=2

// 1
// 0
// 0
// 0
// 1
//  print 3

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int> a(n);
    for(auto &i:a){
       cin>>i;
    }  
   
   int zeroCount=0,ans=0,i=0;
    for(int j=0;j<n;j++){
       if(a[j]==0){
          zeroCount++;
       }
       
        while(zeroCount>k){         
            if(a[i]==0){
                zeroCount--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
   cout<<" print "<<ans; 
}