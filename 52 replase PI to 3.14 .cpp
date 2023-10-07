#include<bits/stdc++.h>
using namespace std;
void replacePIto(string str){
    if(str.length()==0) return ;

    if(str[0]=='p' && str[1]=='i'){
        cout<<"3.14";
       string s=str.substr(2);
       replacePIto(s); 
       
       // or
      //  replacePIto(str.substr(2)); 
    }else{
        cout<<str[0];
       string s=str.substr(2);
       replacePIto(s); 

       //  or
      //  replacePIto(str.substr(1)); 

    }

   
   
}

int main(){
    string str;
    cin>>str;
    replacePIto(str);
}