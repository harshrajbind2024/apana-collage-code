//   m-2 code-hepl

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

void insertAtHead( node *head,int x){
    node *temp=new node(x);
    temp->next=head;
    head=temp;


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
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);

    
    printList(head);
    return 0;

}
