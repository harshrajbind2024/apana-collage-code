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

void dislpay(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int lenth(node *head){
    node *temp=head;
    int l=0;
    while(temp!=head){
      l++;
      temp=temp->next;
    }
    return l;
}
 

 node *Kappend(node *head,int k){
    node *newHead;
    node *newTail;
    node *temp=head;
    int l=lenth(head);
    k=k%l ;  // k%l-- mean's k<l;
    int count=1;

    while(temp->next!=NULL){
       if(count==l-k){
        newTail=temp;
       }
       if(count==l-k +1){
        newHead=temp;
       }
      temp=temp->next;
      count++;

    }
    
    newTail->next=NULL;
    temp->next=head;
    return newHead;
    
 }



int main(){
   node* head=new node(1);
    head->next=new node(10);
   head->next->next=new node(20);
   head->next->next->next=new node(30);
   head->next->next->next->next=new node(40);
  head->next->next->next->next->next=new node(50);

   dislpay(head);
   cout<<endl;
   
   node *newnode=Kappend(head,3);
    dislpay(newnode);
} 