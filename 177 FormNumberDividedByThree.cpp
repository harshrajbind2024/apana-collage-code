//   m-1 run 
#include<bits/stdc++.h>
using namespace std;

void FormNumberDividedByThree(vector<int> a, int k){
    pair<int ,int>ans;
    int sum=0;
    for(int i=0;i<k;i++){
        sum +=a[i];
    }
    bool found=false;
    if(sum%3==0){
        ans= make_pair(0,k-1);
        found=true;
    }

    if(!found){
        ans=make_pair(-1,0);
    }

    if(ans.first==-1){
        cout<<" no such saubarray exist";
    }
    else{
        for(int i=ans.first;i<=ans.second;i++){
            cout<<a[i]<< " ";
        }
    }
}


int main(){
   vector<int> a={85,23,45,12,56,82};
   int k=3;
   FormNumberDividedByThree(a,k);
}