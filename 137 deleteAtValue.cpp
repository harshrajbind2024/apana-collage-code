// m-1 run
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

void deletion(node *head,int val){
    node *temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node *deleteData=temp->next;
    temp->next=temp->next->next;
    delete deleteData;

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
    deletion(head,30);
     printList(head);
    return 0;

}
