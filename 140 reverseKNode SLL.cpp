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

node *reverseK(node *head,int k){
    node *currptr=head;
    node *previptr=NULL;
    node *nextpte;
    int count=0;
    while(currptr!=NULL && count<k){
        nextpte=currptr->next;
        currptr->next=previptr;
        previptr=currptr;
        currptr=nextpte;
        count++;

    }
    if(nextpte!=NULL){
        head->next=reverseK(nextpte,k);
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
   int k=2;
   node *newhead=reverseK(head,k);
   dislpay(newhead);


}