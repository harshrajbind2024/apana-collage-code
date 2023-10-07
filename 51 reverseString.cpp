//   m-2 run
#include<bits/stdc++.h>
using namespace std;
void reverseString(string str){
    if(str.length()==0) return ;
    string rev=str.substr(1);
  
    reverseString(rev);
    cout<<str[0];
}

int main(){
    string str;
    cin>>str;
    reverseString(str);
}

//    m-1 wrong

#include<bits/stdc++.h>
using namespace std;
void reverse(string str){
    if(str.length()==0) return ;
    string rev=str;
    // rev.reserve();  wrong
    reverse(rev);
    cout<<rev;
}

int main(){
    string str;
    cin>>str;
    reverse(str);
}
