// m-1 run

#include<bits/stdc++.h>
using namespace std;

void reverseSentense(string st){
    stack<string>str;
    for(int i=0;i<st.length();i++){
        string word=" ";
        while ( st[i]!=' ' && i<st.length() )
        {
            word+=st[i];
            i++;
        }
        str.push(word);
        
    }
    while(!str.empty()){
        cout<<str.top();
        str.pop();
    }
    cout<<endl;
}

int main(){
   string s="hey, how are you doing ? ";
   reverseSentense(s);

}