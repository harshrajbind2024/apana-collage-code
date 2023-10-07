//   m-2 run

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

void insertAtTail( node *head,int x){
    node *temp=new node(x);

    if(head==NULL){
        head=temp;
        return ; 
    }

    node *curr=head;

    while(curr->next!=NULL){
        curr=curr->next;
    }

   curr->next=temp;
  

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
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);

    
    printList(head);
    return 0;

}



//   m-1 wrong

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

void insertAtTail( node *head,int x){
    node *temp=new node(x);

    if(head==NULL){
        head=temp;
        return ; 
    }

    node *curr=head;

    while(curr->next!=NULL){
        curr=curr->next;
    }

   curr->next=temp;
  

}

void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
     node *head=NULL;
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);

    
    printList(head);
    return 0;

}
