//   wrong
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    bool res=true;

    for(int i=0;i<n;i++){
        if(ch[i]!=ch[n-1-i]){
            res=false;
            break;
        }
    }

    if(res==true){
        cout<<" palindram ";
    }
    else{
         cout<<" not palindram ";
    }
}