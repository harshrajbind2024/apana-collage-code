//   m-2 run
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> a(n);
    for(auto &i:a){
       cin>>i;
    }

    bool found=false;

    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;

        while(low<high){
            int curr=a[i]+a[low]+a[high];

            if(curr==target){
                found=true;
            }

            if(curr<target){
                low++;
            }
            else{
                high--;
            }

        }
    }
    if(found){
        cout<<" yes";
       
    }
    else{
        cout<<" no ";
    }
}


//  wrong--- yes not print

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> a(n);
    for(auto &i:a){
       cin>>i;
    }
    bool found=false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            int curr=a[i]+a[low]+a[high];
            if(curr==target){
                found=true;
            }
            if(curr<target){
                low++;
            }
            if(curr>target){
                high--;
            }

        }
    }
    if(found){
        cout<<" yes";
       
    }
    else{
        cout<<" no ";
    }
}