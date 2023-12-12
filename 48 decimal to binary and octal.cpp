//   m-2 




 //  m-1 wrong
 #include<bits/stdc++.h>
 using namespace std;

int main(){
    int n;
    cin>>n;
   int ans=0;
   int i=0;
    while (n!=0)
    {
       int bit=n&1;
       ans=(bit*pow(10,i))+ans;
       i++;
       n=n>>1;
 
    }
    cout<<ans;
    
} 
 
 
 
 #include<bits/stdc++.h>
 using namespace std;

int main(){
    int n;
    cin>>n;
   int ans=0;
   int i=0;
    while (n!=0)
    {
       int bit=n&1;
       ans=(bit*pow(10,i))+ans;
       i++;
       n=n>>1;
 
    }
    
}