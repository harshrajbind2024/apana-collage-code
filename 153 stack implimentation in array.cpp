// m-1 run

#include<bits/stdc++.h>
using namespace std;

#define n 100

class mystack
{       
    int *arr;
    int top; 
   
   public :
    mystack(){
       
        arr=new int[n];
        top=-1;
    }
    
    void push(int x){
        if(top==n-1){
            cout<<" stack overflow"<<endl;
            return ;
        }
        top++;
        arr[top]=x;
    }

    int pop(){
         if(top==-1){
            cout<<" stack underflow"<<endl;
            return -1;
        }
        int res=arr[top];
        top--;
        return res;

    }

    int peek(){
        if(top==-1){
            cout<<" stack underflow"<<endl;
            return -1;
        }
        return arr[top];
    }

    int size(){
        return top+1;
    }

    bool isEmpty(){
        return (top==-1);
    }


};


int main(){
    mystack s;
    s.push(40);
    s.push(10);
    s.push(20);
    s.push(50);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;

}