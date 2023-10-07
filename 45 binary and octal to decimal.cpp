

//     m- 2  run

// 46 octal to decimal

#include<bits/stdc++.h>
using namespace std;

int OtoD(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int last=n%10;
        ans+=last*x;
        x*=8;
        n=n/10;   
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<OtoD(n)<<endl;
}






//     m-   run

#include<bits/stdc++.h>
using namespace std;

int BtoD(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int last=n%10;
        ans+=last*x;
        x*=2;
        n=n/10;   
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<BtoD(n)<<endl;
}

