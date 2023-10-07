//   m-1 run

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
	int mx=-1;
	for(int i=0;i<n;i++){
		if(a[i]>mx &&a[i]>a[i+1]){
			ans++;
		}
		mx=max(mx,a[i]);
	} 
	cout<<endl;
	cout<<ans;
}