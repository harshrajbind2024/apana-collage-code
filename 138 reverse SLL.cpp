//  run

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

node *reverse(node *head){
    node *currptr=head;
    node *previptr=NULL;
    node *nextpte;
    while(currptr!=NULL){
        nextpte=currptr->next;
        currptr->next=previptr;
        previptr=currptr;
        currptr=nextpte;
    }
    return previptr;
}


void dislpay(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
   node* head=new node(10);
    head->next=new node(15);
   head->next->next=new node(20);
   head->next->next->next=new node(30);
   head->next->next->next->next=new node(40);

   dislpay(head);
   cout<<endl;
   cout<<"print revers"<<endl;
   node *newhead=reverse(head);
   dislpay(newhead);


}