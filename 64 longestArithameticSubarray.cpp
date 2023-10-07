//  m-1 run
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"print ";
    int pd=a[0]-a[1];
	int ans=2;
	int curr=2;
	int i=2;

	while(i<n){
		if(pd==a[i]-a[i-1]){
			curr++;
		}
		else{
			pd=a[i]-a[i-1];
			curr=2;
		}
		ans=max(ans,curr);
		i++;
	}
	cout<<ans;
}