#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "afjkskffdfdhhgt";

    int frequ[26];    
    for(int i=0;i<26;i++){
        frequ[i]=0;
    }

    for(int i=0;i<s.size();i++){
        frequ[s[i]-'a']++;
    }
    char ans='a';
    int maxf=0;
    
    for(int i=0;i<26;i++){
        if(frequ[i]>maxf){
            maxf=frequ[i];
            ans=i+'a';
        }
    }


    cout<<endl<<ans<<" "<<maxf;

}

