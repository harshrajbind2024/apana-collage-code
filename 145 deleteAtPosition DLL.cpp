




//   m-1 run wrong
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
void deleteAtHead(node *head){
    node *temp=head;
    head=head->next;
    head->prev=NULL;
  

}
void deleteAtPosition(node *head,int pos){
    if(pos==1){
       deleteAtHead(head);
       return ;
    }

    node *temp=head;
    int count=1;
    while(temp!=NULL && count !=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
         temp->next->prev=temp->prev;
    }
    delete temp;


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
     
	 int pos=1;
	deleteAtPosition(head,pos);
	printList(head);

}