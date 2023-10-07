//  run
//   m-2 code hepl

// m-1 wrong
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node(int x){
            data=x;
            next=NULL;
    }
};

bool search(node *head,int key){
     node *curr=head;
    while(curr!=NULL){
       if(curr->data==key){
        return true;
       }
        curr=curr->next;
    }

}
void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);


    printList(head);
    cout<<endl<<" ";
    cout<<search(head,30);
    return 0;

}
