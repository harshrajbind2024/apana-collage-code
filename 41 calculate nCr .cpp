//     m-  run
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int res=1;
    for(int i=2;i<=n;i++){
        res*=i;
    }
    return res;

}

int main(){
   int n,r;
   cin>>n>>r;
  int  ans=fact(n)/(fact(r)*fact(n-r));
  cout<<ans;

}