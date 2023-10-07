//  m-2  run
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
                    int j;
                for(j=2;j<num;j++){

                        if(num%j==0){
                            cout<<" not prime number beetwen "<< num<<endl;
                            break;
                        }
                        // else{          //wrong-1
                        //     cout<<"prime number"<<num<<endl;
                        // }

                        //  if(j==num){         // wrong-2
                        //     cout<<"prime number"<<num<<endl;
                        // }

                }
       
           if(j==num){
                cout<<"prime number"<<num<<endl;
            }

    }

}








//  m-1 wrong
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){

        if(b%i==0){
            cout<<" not prime number beetwen 'a' and 'b'"<<endl;
            break;
        }
        else{
            cout<<"prime number"<<endl;
        }
    }

}