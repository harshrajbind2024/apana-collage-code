
//    M-1  RUN
// inserAtHead  
#include<bits/stdc++.h>
using namespace std;

class node{
   public:
       int data;
       node *next;
       node *prev;
       node(int x){
           data=x;
           next=NULL;
           prev=NULL;

       }

};

node *inserAtHead(node *head,int x){
	node *temp=new node(x);
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    return temp;
}



void  printList(node *head){
      node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}


int  main(){
   node *head=new node(10);
   node *temp1=new node(20);
   node *temp2=new node(30);
   node *temp3=new node(40);

   head->next=temp1;
   temp1->prev=head;

    temp1->next=temp2;
    temp2->prev=temp1;

    temp2->next=temp3;
    temp3->prev=temp2;
    

    printList(head);
    cout<<endl;
     
	 int x=100;
	head=inserAtHead(head,x);
	printList(head);

}