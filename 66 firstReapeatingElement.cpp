//   apana collage
// m-2   wrong

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N=1e6+2;
	int idx[N];
	for(int i=0;i<N;i++){
		idx[i]=-1;

	}
	int minidx=INT_MAX;
	for(int i=0;i<n;i++){
		if(idx[i]!=-1){
			minidx=min(minidx,idx[a[i]]);
		}
	}
	if(minidx==INT_MAX){
		cout<<"-1";
	}
	else{
		cout<<minidx+1;
	}
}




//   m-1 run self
//  O(n^2)
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int index=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				index=min(index,j);
			}
		}
		
	} 
	cout<<endl;
	cout<<index;
	
}