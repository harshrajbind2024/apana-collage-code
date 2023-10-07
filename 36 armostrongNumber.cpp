//     m-  run
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int t=n;
   int sum=0;
   while (n!=0)
   {
    int last_no=n%10;
    // sum=sum*10+last_no*last_no*last_no;    wrong
    sum=sum+last_no*last_no*last_no;
    n=n/10;

   }
   if(sum==t){
    cout<<"armostrong no.";
   }
   else{
     cout<<" not  armostrong no.";
   }


}